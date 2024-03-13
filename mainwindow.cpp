#include "mainwindow.h"
#include <QPushButton>
#include <QVBoxLayout>
#include <QLabel>
#include <QLineEdit>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent) {
    QWidget *centralWidget = new QWidget(this);
    QVBoxLayout *layout = new QVBoxLayout(centralWidget);

    QLabel *titleLabel = new QLabel("Material UI in Qt", centralWidget);
    titleLabel->setStyleSheet(
        "QLabel {"
        "   font-size: 24px;"
        "   font-weight: bold;"
        "   margin-bottom: 20px;"
        "   color: #212121;" // Material Grey 900
        "}"
        );
    layout->addWidget(titleLabel);

    // Example buttons
    QPushButton *button1 = new QPushButton("First Button", centralWidget);
    button1->setStyleSheet(
        "QPushButton {"
        "   background-color: #6200EA;" // Material Purple 500
        "   color: white;"
        "   border-radius: 4px;"
        "   padding: 10px;"
        "   margin-bottom: 10px;"
        "}"
        "QPushButton:hover {"
        "   background-color: #3700B3;" // Material Purple 700
        "}"
        );
    layout->addWidget(button1);


    QPushButton *button2 = new QPushButton("Second Button", centralWidget);
    button2->setStyleSheet(
        "QPushButton {"
        "   background-color: #03DAC5;" // Material Teal 200
        "   color: #212121;"            // Material Grey 900
        "   border-radius: 4px;"
        "   padding: 10px;"
        "   margin-bottom: 10px;"
        "}"
        "QPushButton:hover {"
        "   background-color: #018786;" // Material Teal 700
        "}"
        );
    layout->addWidget(button2);

    QLineEdit *lineEdit = new QLineEdit(centralWidget);
    lineEdit->setPlaceholderText("Input field");
    lineEdit->setStyleSheet(
        "QLineEdit {"
        "   border: 2px solid #6200EA;" // Material Purple 500
        "   border-radius: 4px;"
        "   padding: 10px;"
        "   color: #212121;"            // Material Grey 900
        "}"
        "QLineEdit:focus {"
        "   border-color: #3700B3;"     // Material Purple 700
        "}"
        );
    layout->addWidget(lineEdit);

    setCentralWidget(centralWidget);
    resize(600, 300);
}


