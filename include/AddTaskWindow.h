#pragma once

#include <QDialog>
#include "JsonHandler.h"

QT_BEGIN_NAMESPACE
namespace Ui { class AddTaskWindow; }
QT_END_NAMESPACE

class AddTaskWindow : public QDialog
{
    Q_OBJECT

public:
    explicit AddTaskWindow(QWidget *parent = nullptr);
    ~AddTaskWindow();

    // const QString ConfigName = "config.json";
    // const QString TaskListName = "task_list.json";

private:
    Ui::AddTaskWindow *ui;
    QColor taskColor{Qt::white};
    bool ValidateTask();
    void WriteToConsole(const QString& message, const QString& color);

    AppConfig _config;

    void SaveTask();
    // void SaveToJson(const QJsonObject& root, const QString& fileName);
    void AddURLToList(const QString& url);
    // QVector<QString> GetURLList();
    void AddPathToList(const QString& path);
    // QVector<QString> GetPathList();

};