/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *toolbarLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *statusLabel;
    QPushButton *addTaskButton;
    QVBoxLayout *tasksLayout;
    QSpacerItem *verticalSpacer;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(400, 300);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        toolbarLayout = new QHBoxLayout();
        toolbarLayout->setSpacing(6);
        toolbarLayout->setObjectName(QStringLiteral("toolbarLayout"));
        horizontalSpacer = new QSpacerItem(385, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        toolbarLayout->addItem(horizontalSpacer);

        statusLabel = new QLabel(centralWidget);
        statusLabel->setObjectName(QStringLiteral("statusLabel"));

        toolbarLayout->addWidget(statusLabel);

        addTaskButton = new QPushButton(centralWidget);
        addTaskButton->setObjectName(QStringLiteral("addTaskButton"));

        toolbarLayout->addWidget(addTaskButton);


        verticalLayout->addLayout(toolbarLayout);

        tasksLayout = new QVBoxLayout();
        tasksLayout->setSpacing(6);
        tasksLayout->setObjectName(QStringLiteral("tasksLayout"));

        verticalLayout->addLayout(tasksLayout);

        verticalSpacer = new QSpacerItem(20, 235, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "ToDo", nullptr));
        statusLabel->setText(QApplication::translate("MainWindow", "Status: 0 todo/0 done", nullptr));
        addTaskButton->setText(QApplication::translate("MainWindow", "Add task", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
