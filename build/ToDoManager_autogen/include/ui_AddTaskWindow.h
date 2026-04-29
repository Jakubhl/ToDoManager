/********************************************************************************
** Form generated from reading UI file 'AddTaskWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDTASKWINDOW_H
#define UI_ADDTASKWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddTaskWindow
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLineEdit *taskNameLE;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *URLLE;
    QPushButton *URLAddBtn;
    QHBoxLayout *horizontalLayout_4;
    QComboBox *URLListCB;
    QHBoxLayout *horizontalLayout_7;
    QLineEdit *pathLE;
    QPushButton *pathAddBtn;
    QHBoxLayout *horizontalLayout_6;
    QComboBox *pathListCB;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *selColorBtn;
    QSpacerItem *horizontalSpacer;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_16;
    QLabel *taskNameLabel;
    QHBoxLayout *horizontalLayout_19;
    QLabel *URLLabel;
    QHBoxLayout *horizontalLayout_20;
    QLabel *URLListLabel;
    QHBoxLayout *horizontalLayout_21;
    QLabel *pathLabel;
    QHBoxLayout *horizontalLayout_22;
    QLabel *pathListLabel;
    QHBoxLayout *horizontalLayout_18;
    QLabel *taskColorLabel;
    QWidget *horizontalLayoutWidget_7;
    QHBoxLayout *horizontalLayout_23;
    QLabel *console;
    QPushButton *cancelBtn;
    QPushButton *saveBtn;

    void setupUi(QDialog *AddTaskWindow)
    {
        if (AddTaskWindow->objectName().isEmpty())
            AddTaskWindow->setObjectName("AddTaskWindow");
        AddTaskWindow->resize(599, 300);
        verticalLayoutWidget = new QWidget(AddTaskWindow);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(90, 10, 501, 241));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        taskNameLE = new QLineEdit(verticalLayoutWidget);
        taskNameLE->setObjectName("taskNameLE");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(taskNameLE->sizePolicy().hasHeightForWidth());
        taskNameLE->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(taskNameLE);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        URLLE = new QLineEdit(verticalLayoutWidget);
        URLLE->setObjectName("URLLE");
        sizePolicy.setHeightForWidth(URLLE->sizePolicy().hasHeightForWidth());
        URLLE->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(URLLE);

        URLAddBtn = new QPushButton(verticalLayoutWidget);
        URLAddBtn->setObjectName("URLAddBtn");

        horizontalLayout_3->addWidget(URLAddBtn);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        URLListCB = new QComboBox(verticalLayoutWidget);
        URLListCB->setObjectName("URLListCB");
        sizePolicy.setHeightForWidth(URLListCB->sizePolicy().hasHeightForWidth());
        URLListCB->setSizePolicy(sizePolicy);

        horizontalLayout_4->addWidget(URLListCB);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        pathLE = new QLineEdit(verticalLayoutWidget);
        pathLE->setObjectName("pathLE");
        sizePolicy.setHeightForWidth(pathLE->sizePolicy().hasHeightForWidth());
        pathLE->setSizePolicy(sizePolicy);

        horizontalLayout_7->addWidget(pathLE);

        pathAddBtn = new QPushButton(verticalLayoutWidget);
        pathAddBtn->setObjectName("pathAddBtn");

        horizontalLayout_7->addWidget(pathAddBtn);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        pathListCB = new QComboBox(verticalLayoutWidget);
        pathListCB->setObjectName("pathListCB");
        sizePolicy.setHeightForWidth(pathListCB->sizePolicy().hasHeightForWidth());
        pathListCB->setSizePolicy(sizePolicy);

        horizontalLayout_6->addWidget(pathListCB);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        selColorBtn = new QPushButton(verticalLayoutWidget);
        selColorBtn->setObjectName("selColorBtn");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(selColorBtn->sizePolicy().hasHeightForWidth());
        selColorBtn->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(selColorBtn);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalLayoutWidget_2 = new QWidget(AddTaskWindow);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayoutWidget_2->setGeometry(QRect(10, 9, 81, 241));
        verticalLayout_5 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName("horizontalLayout_16");
        taskNameLabel = new QLabel(verticalLayoutWidget_2);
        taskNameLabel->setObjectName("taskNameLabel");

        horizontalLayout_16->addWidget(taskNameLabel);


        verticalLayout_5->addLayout(horizontalLayout_16);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setObjectName("horizontalLayout_19");
        URLLabel = new QLabel(verticalLayoutWidget_2);
        URLLabel->setObjectName("URLLabel");

        horizontalLayout_19->addWidget(URLLabel);


        verticalLayout_5->addLayout(horizontalLayout_19);

        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setObjectName("horizontalLayout_20");
        URLListLabel = new QLabel(verticalLayoutWidget_2);
        URLListLabel->setObjectName("URLListLabel");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(URLListLabel->sizePolicy().hasHeightForWidth());
        URLListLabel->setSizePolicy(sizePolicy2);

        horizontalLayout_20->addWidget(URLListLabel);


        verticalLayout_5->addLayout(horizontalLayout_20);

        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setObjectName("horizontalLayout_21");
        pathLabel = new QLabel(verticalLayoutWidget_2);
        pathLabel->setObjectName("pathLabel");

        horizontalLayout_21->addWidget(pathLabel);


        verticalLayout_5->addLayout(horizontalLayout_21);

        horizontalLayout_22 = new QHBoxLayout();
        horizontalLayout_22->setObjectName("horizontalLayout_22");
        pathListLabel = new QLabel(verticalLayoutWidget_2);
        pathListLabel->setObjectName("pathListLabel");
        sizePolicy2.setHeightForWidth(pathListLabel->sizePolicy().hasHeightForWidth());
        pathListLabel->setSizePolicy(sizePolicy2);

        horizontalLayout_22->addWidget(pathListLabel);


        verticalLayout_5->addLayout(horizontalLayout_22);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName("horizontalLayout_18");
        taskColorLabel = new QLabel(verticalLayoutWidget_2);
        taskColorLabel->setObjectName("taskColorLabel");
        sizePolicy2.setHeightForWidth(taskColorLabel->sizePolicy().hasHeightForWidth());
        taskColorLabel->setSizePolicy(sizePolicy2);

        horizontalLayout_18->addWidget(taskColorLabel);


        verticalLayout_5->addLayout(horizontalLayout_18);

        horizontalLayoutWidget_7 = new QWidget(AddTaskWindow);
        horizontalLayoutWidget_7->setObjectName("horizontalLayoutWidget_7");
        horizontalLayoutWidget_7->setGeometry(QRect(10, 250, 581, 41));
        horizontalLayout_23 = new QHBoxLayout(horizontalLayoutWidget_7);
        horizontalLayout_23->setObjectName("horizontalLayout_23");
        horizontalLayout_23->setContentsMargins(0, 0, 0, 0);
        console = new QLabel(horizontalLayoutWidget_7);
        console->setObjectName("console");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(console->sizePolicy().hasHeightForWidth());
        console->setSizePolicy(sizePolicy3);

        horizontalLayout_23->addWidget(console);

        cancelBtn = new QPushButton(horizontalLayoutWidget_7);
        cancelBtn->setObjectName("cancelBtn");

        horizontalLayout_23->addWidget(cancelBtn);

        saveBtn = new QPushButton(horizontalLayoutWidget_7);
        saveBtn->setObjectName("saveBtn");

        horizontalLayout_23->addWidget(saveBtn);


        retranslateUi(AddTaskWindow);

        QMetaObject::connectSlotsByName(AddTaskWindow);
    } // setupUi

    void retranslateUi(QDialog *AddTaskWindow)
    {
        AddTaskWindow->setWindowTitle(QCoreApplication::translate("AddTaskWindow", "Dialog", nullptr));
        URLAddBtn->setText(QCoreApplication::translate("AddTaskWindow", "Add", nullptr));
        pathAddBtn->setText(QCoreApplication::translate("AddTaskWindow", "Add", nullptr));
        selColorBtn->setText(QCoreApplication::translate("AddTaskWindow", "Color", nullptr));
        taskNameLabel->setText(QCoreApplication::translate("AddTaskWindow", "Task name:", nullptr));
        URLLabel->setText(QCoreApplication::translate("AddTaskWindow", "URL:", nullptr));
        URLListLabel->setText(QCoreApplication::translate("AddTaskWindow", "URL list:", nullptr));
        pathLabel->setText(QCoreApplication::translate("AddTaskWindow", "Path:", nullptr));
        pathListLabel->setText(QCoreApplication::translate("AddTaskWindow", "Path list:", nullptr));
        taskColorLabel->setText(QCoreApplication::translate("AddTaskWindow", "Task Color:", nullptr));
        console->setText(QString());
        cancelBtn->setText(QCoreApplication::translate("AddTaskWindow", "Cancel", nullptr));
        saveBtn->setText(QCoreApplication::translate("AddTaskWindow", "Add task", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddTaskWindow: public Ui_AddTaskWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDTASKWINDOW_H
