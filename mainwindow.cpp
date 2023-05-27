#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QTabWidget>
#include <QVBoxLayout>
#include <QPushButton>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Create the tab widget
    QTabWidget *tabWidget = new QTabWidget(this);

    // Create the vertical layout
    QVBoxLayout *layout = new QVBoxLayout();
    layout->addWidget(tabWidget);

    // Set the layout to the main window
    QWidget *centralWidget = new QWidget();
    centralWidget->setLayout(layout);
    setCentralWidget(centralWidget);

    // Add tabs to the tab widget
    tabWidget->addTab(new QWidget(), "Gaming");
    tabWidget->addTab(new QWidget(), "Coding");
    tabWidget->addTab(new QWidget(), "Browser");
    tabWidget->addTab(new QWidget(), "Chatting");
    tabWidget->addTab(new QWidget(), "Util");

    // Access the content widget of the first tab
    QWidget* firstTabWidget = tabWidget->widget(0);

    // Create the button
    QPushButton *button = new QPushButton("Button", firstTabWidget);

    // Add the button to the layout of the first tab's content widget
    QVBoxLayout *firstTabLayout = new QVBoxLayout(firstTabWidget);
    firstTabLayout->addWidget(button);

    // Connect the button's clicked signal to the handleButtonClick slot
    connect(button, &QPushButton::clicked, this, &MainWindow::handleButtonClick);

    // Set additional properties
    tabWidget->setTabPosition(QTabWidget::North);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::handleButtonClick()
{
    // Implementation of the function
    qDebug() << "Button clicked!";
}
