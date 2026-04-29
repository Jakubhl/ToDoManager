#include "MainWindow.h"
#include "ui_MainWindow.h"
#include "AddTaskWindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->actionNew_task, &QAction::triggered,
        this, &MainWindow::onOpenDialog);
    QAction *exitAction = ui->menuApp->addAction("Exit");
    connect(exitAction, &QAction::triggered, this, &QMainWindow::close);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onOpenDialog()
{
    AddTaskWindow dialog(this);
    dialog.exec(); // modální dialog
}
