#include "AddTaskWindow.h"
#include "ui_AddTaskWindow.h"
#include <QColorDialog>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QFile>

AddTaskWindow::AddTaskWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AddTaskWindow)
{
    ui->setupUi(this);
    _config.Load();
    setWindowTitle("Add Task");
    connect(ui->selColorBtn, &QPushButton::clicked, this, [=]() {
        QColor color = QColorDialog::getColor(Qt::white, this);
        if (color.isValid()) {
            ui->selColorBtn->setStyleSheet(
                "background-color: " + color.name()
            );
            taskColor = color;
        }
    });

    connect(ui->cancelBtn, &QPushButton::clicked, this, [=]() {
        this->close();
    });

    connect(ui->saveBtn, &QPushButton::clicked, this, [=]() {
        SaveTask();
    });

    connect(ui->URLAddBtn, &QPushButton::clicked, this, [=]() {
        AddURLToList(ui->URLLE->text());
    });

    connect(ui->pathAddBtn, &QPushButton::clicked, this, [=]() {
        AddPathToList(ui->pathLE->text());
    });

    ui->URLListCB->addItems(_config.urls.Get().toList());
    ui->pathListCB->addItems(_config.paths.Get().toList());
}

AddTaskWindow::~AddTaskWindow()
{
    delete ui;
}

// QVector<QString> AddTaskWindow::GetURLList() {
//     QVector<QString> urls;
//     for (int i = 0; i < ui->URLListCB->count(); ++i) {
//         urls.append(ui->URLListCB->itemText(i));
//     }
//     ui->URLListCB->clear();
//     ui->URLListCB->addItems(urls.toList());
//     return urls;
// }

// QVector<QString> AddTaskWindow::GetPathList() {
//     QVector<QString> paths;
//     for (int i = 0; i < ui->pathListCB->count(); ++i) {
//         paths.append(ui->pathListCB->itemText(i));
//     }
//     ui->pathListCB->clear();
//     ui->pathListCB->addItems(paths.toList());
//     return paths;
// }

void AddTaskWindow::AddURLToList(const QString& url)
{
    if (url.isEmpty()) {
        return;
    }
    // QJsonObject root;
    // QVector<QString> urls = GetURLList();
    // QJsonArray urlArray;

    // check duplicate
    // if (std::find(urls.begin(), urls.end(), url) != urls.end()) {
    //     return;
    // }

    ui->URLLE->clear();
    ui->URLListCB->addItem(url);
    ui->URLListCB->setFocus();
    _config.urls.Add(url);


    // for (const auto& url : urls){
    //     urlArray.append(url);
    // }
    // root["urls"] = urlArray;
    // SaveToJson(root, ConfigName);
}

void AddTaskWindow::AddPathToList(const QString& path)
{
    if (path.isEmpty()) {
        return;
    }
    // QJsonObject root;
    // QVector<QString> paths = GetPathList();
    // QJsonArray pathArray;

    // check duplicate
    // if (std::find(paths.begin(), paths.end(), path) != paths.end()) {
    //     return;
    // }

    ui->pathListCB->addItem(path);
    ui->pathLE->clear();

    _config.paths.Add(path);

    // for (const auto& path : paths){
    //     pathArray.append(path);
    // }
    // root["paths"] = pathArray;

    // SaveToJson(root, ConfigName);
}

void AddTaskWindow::WriteToConsole(const QString& message, const QString& color = "white")
{
    ui->console->setText(message);
    ui->console->setStyleSheet("color: " + color + ";");
}

bool AddTaskWindow::ValidateTask()
{
    WriteToConsole("", "black"); // clear console
    if (ui->taskNameLE->text().isEmpty()) {
        WriteToConsole("Task name cannot be empty.", "red");
        return false;
    }
    if (taskColor == Qt::white) {
        WriteToConsole("Please select a task color.", "red");
        return false;
    }
    return true;

}

void AddTaskWindow::SaveTask()
{
    if(ValidateTask()) {
        QString taskName = ui->taskNameLE->text();
        // QVector<QString> urls;
        // for (int i = 0; i < ui->URLListCB->count(); ++i) {
        //     urls.append(ui->URLListCB->itemText(i));
        // }
        // QVector<QString> paths;
        // for (int i = 0; i < ui->pathListCB->count(); ++i) {
        //     paths.append(ui->pathListCB->itemText(i));
        // }
        // QJsonObject root;
        Task task;
        // QJsonArray taskList;

        task.name = taskName;
        // Color (hex string)
        task.color = taskColor.name(); // např. "#ff0000"
        task.updateList = QVector<QString>();
        // taskList.append(task);
        // root["taskList"] = taskList;

        // SaveToJson(root, TaskListName);
        _config.tasks.AddTask(task);
        _config.Save();
        
        this->close();
    }
}

// void AddTaskWindow::SaveToJson(const QJsonObject& root, const QString& fileName)
// {
//     QFile file(fileName);
//     if (!file.open(QIODevice::WriteOnly)) {
//         WriteToConsole("Error: Could not open file for writing.", "red");
//         return;
//     }
//     QJsonDocument doc(root);
//     file.write(doc.toJson(QJsonDocument::Indented));
//     file.close();
// }




