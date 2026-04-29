#pragma once
#include <QJsonObject>
#include <QJsonArray>
#include <QVector>

namespace JsonHandler { 
    static bool SaveToJson(const QJsonObject& root, const QString& fileName);
    static QJsonObject LoadFromJson(const QString& fileName);
}

class Task {
    public:
        QString name;
        QString color;
        QVector<QString> updateList;
        static Task FromJson(const QJsonObject& obj);
        QJsonObject ToJson() const;
};

class TaskConfig {
    public:
        const QVector<Task>& GetTasks() const { return tasks; }

        void AddTask(const Task& task);
        void RemoveTask(const QString& name);
        void FromJson(const QJsonObject& obj);
        QJsonObject ToJson() const;

    private:
        QVector<Task> tasks;
};

class StringListConfig {
    public:
        const QVector<QString>& Get() const { return items; }

        void Add(const QString& item);
        void Remove(const QString& item);

        void FromJson(const QJsonObject& obj, const QString& key);
        QJsonObject ToJson(const QString& key) const;

    protected:
        QVector<QString> items;
};

class UrlConfig : public StringListConfig {};
class PathConfig : public StringListConfig {};

class AppConfig {
    public:
        bool Load();
        bool Save();

        UrlConfig urls;
        PathConfig paths;
        TaskConfig tasks;

    private:
        QString configFile = "config.json";
        QString taskFile = "task_list.json";

};