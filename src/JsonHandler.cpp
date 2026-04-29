#include "JsonHandler.h"
#include <QJsonDocument>
#include <QFile>


bool AppConfig::Load() {
    QJsonObject configObj = JsonHandler::LoadFromJson(configFile);
    QJsonObject taskObj = JsonHandler::LoadFromJson(taskFile);

    bool ok = !configObj.isEmpty() && !taskObj.isEmpty();

    urls.FromJson(configObj, "urls");
    paths.FromJson(configObj, "paths");
    tasks.FromJson(taskObj);

    return ok;
}

bool AppConfig::Save() {
    // save lists
    QJsonObject configObj;
    configObj["urls"] = urls.ToJson("urls")["urls"];
    configObj["paths"] = paths.ToJson("paths")["paths"];

    if (!JsonHandler::SaveToJson(configObj, configFile)) {
        return false;
    }

    // save tasks
    QJsonObject taskObj = tasks.ToJson();

    if (!JsonHandler::SaveToJson(taskObj, taskFile)) {
        return false;
    }

    return true;
}



bool JsonHandler::SaveToJson(const QJsonObject& root, const QString& fileName) {
    QFile file(fileName);
    if (!file.open(QIODevice::WriteOnly)) {
        return false;
    }

    QJsonDocument doc(root);
    file.write(doc.toJson(QJsonDocument::Indented));
    return true;
}

QJsonObject JsonHandler::LoadFromJson(const QString& fileName) {
    QFile file(fileName);
    if (!file.open(QIODevice::ReadOnly)) {
        return {};
    }

    QJsonDocument doc = QJsonDocument::fromJson(file.readAll());
    return doc.object();
}




void StringListConfig::Add(const QString& item) {
    if (!items.contains(item) && !item.isEmpty()) {
        items.append(item);
    }
}

void StringListConfig::FromJson(const QJsonObject& obj, const QString& key) {
    items.clear();
    for (const auto& v : obj[key].toArray()) {
        items.append(v.toString());
    }
}

QJsonObject StringListConfig::ToJson(const QString& key) const {
    QJsonObject obj;
    obj[key] = QJsonArray::fromStringList(items.toList());
    return obj;
}



void TaskConfig::AddTask(const Task& task) {
    tasks.append(task);
}

void TaskConfig::RemoveTask(const QString& name) {
    tasks.erase(std::remove_if(tasks.begin(), tasks.end(),
        [&](const Task& t) { return t.name == name; }),
        tasks.end());
}

void TaskConfig::FromJson(const QJsonObject& obj) {
    tasks.clear();

    QJsonArray arr = obj["tasks"].toArray();
    for (const auto& val : arr) {
        Task t;
        t.FromJson(val.toObject());
        tasks.append(t);
    }
}

QJsonObject TaskConfig::ToJson() const {
    QJsonObject obj;
    QJsonArray arr;

    for (const auto& t : tasks) {
        arr.append(t.ToJson());
    }

    obj["tasks"] = arr;
    return obj;
}

Task Task::FromJson(const QJsonObject& obj) {
    Task task;
    task.name = obj["name"].toString();
    task.color = obj["color"].toString();
    task.updateList.clear();

    QJsonArray arr = obj["updateList"].toArray();
    for (const auto& val : arr) {
        task.updateList.append(val.toString());
    }
    return task;
}

QJsonObject Task::ToJson() const {
    QJsonObject obj;
    obj["name"] = name;
    obj["color"] = color;
    obj["updateList"] = QJsonArray::fromStringList(updateList.toList());
    return obj;
}