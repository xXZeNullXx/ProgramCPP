#include "mainwindow.h"
#include "..\build-ProgramCPP-Desktop_Qt_6_5_1_MinGW_64_bit-Debug\ProgramCPP_autogen\include/ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

