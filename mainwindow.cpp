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

    // Access the content widget
    QWidget* Gaiming = tabWidget->widget(0);
    QWidget* Coding = tabWidget->widget(1);
    QWidget* Browser = tabWidget->widget(2);
    QWidget* Chatting = tabWidget->widget(3);
    QWidget* Util = tabWidget->widget(4);

    // Create the button
    QPushButton *sevenzip = new QPushButton("7Zip", Util);
    QPushButton *brave = new QPushButton("Brave", Browser);

    // Add the button to the layout
    QVBoxLayout *UtilLayout = new QVBoxLayout(Util);
    QVBoxLayout *BrowserLayout = new QVBoxLayout(Browser);
    UtilLayout->addWidget(sevenzip);
    BrowserLayout->addWidget(brave);

    // Connect the button's clicked signal to the handleButtonClick slot
    connect(sevenzip, &QPushButton::clicked, this, &MainWindow::SevenZipClick);
    connect(brave, &QPushButton::clicked, this, &MainWindow::BraveClick);

    // Set additional properties
    tabWidget->setTabPosition(QTabWidget::North);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::SevenZipClick()
{
    std::system("winget install 7zip.7zip");
}

void MainWindow::BraveClick()
{
    std::system("winget install Brave.Brave");
}

