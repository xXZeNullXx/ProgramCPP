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
    QPushButton *VSCode = new QPushButton("VSCode", Coding);
    QPushButton *Discord = new QPushButton("Discord", Chatting);
    QPushButton *CurseForge = new QPushButton("CurseForge", Gaiming);
    QPushButton *TeraCopy = new QPushButton("TeraCopy", Util);
    QPushButton *GitHubDesktop = new QPushButton("GitHub Desktop", Coding);
    QPushButton *LogitechGHUB = new QPushButton("Logitech G HUB", Util);
    QPushButton *MobaXterm = new QPushButton("Moba Xterm", Util);
    QPushButton *Playnite = new QPushButton("Playnite", Gaiming);
    QPushButton *AcrobatReader = new QPushButton("Acrobat Reader", Util);
    QPushButton *StreamDeck = new QPushButton("StreamDeck", Util);
    QPushButton *FlowLauncher = new QPushButton("FlowLauncher", Util);
    QPushButton *EpicGames = new QPushButton("EpicGames", Gaiming);
    QPushButton *PowerToys = new QPushButton("PowerToys", Util);

    // Add the button to the layout
    QVBoxLayout *UtilLayout = new QVBoxLayout(Util);
    QVBoxLayout *BrowserLayout = new QVBoxLayout(Browser);
    QVBoxLayout *CodingLayout = new QVBoxLayout(Coding);
    QVBoxLayout *ChattingLayout = new QVBoxLayout(Chatting);
    QVBoxLayout *GaimingLayout = new QVBoxLayout(Gaiming);
    UtilLayout->addWidget(sevenzip);
    BrowserLayout->addWidget(brave);
    CodingLayout->addWidget(VSCode);
    ChattingLayout->addWidget(Discord);
    GaimingLayout->addWidget(CurseForge);
    UtilLayout->addWidget(TeraCopy);
    CodingLayout->addWidget(GitHubDesktop);
    UtilLayout->addWidget(LogitechGHUB);
    UtilLayout->addWidget(MobaXterm);
    GaimingLayout->addWidget(Playnite);
    UtilLayout->addWidget(AcrobatReader);
    UtilLayout->addWidget(StreamDeck);
    UtilLayout->addWidget(FlowLauncher);
    GaimingLayout->addWidget(EpicGames);
    UtilLayout->addWidget(PowerToys);

    // Connect the button's clicked signal to the handleButtonClick slot
    connect(sevenzip, &QPushButton::clicked, this, &MainWindow::SevenZipClick);
    connect(brave, &QPushButton::clicked, this, &MainWindow::BraveClick);
    connect(VSCode, &QPushButton::clicked, this, &MainWindow::VSCodeClick);
    connect(Discord, &QPushButton::clicked, this, &MainWindow::DiscordClick);
    connect(CurseForge, &QPushButton::clicked, this, &MainWindow::CurseForgeClick);
    connect(TeraCopy, &QPushButton::clicked, this, &MainWindow::TeraCopyClick);
    connect(GitHubDesktop, &QPushButton::clicked, this, &MainWindow::GitHubDesktopClick);
    connect(LogitechGHUB, &QPushButton::clicked, this, &MainWindow::LogitechGHUBClick);
    connect(MobaXterm, &QPushButton::clicked, this, &MainWindow::MobaXTermClick);
    connect(Playnite, &QPushButton::clicked, this, &MainWindow::PlayniteClick);
    connect(AcrobatReader, &QPushButton::clicked, this, &MainWindow::AcrobatReaderClick);
    connect(StreamDeck, &QPushButton::clicked, this, &MainWindow::StreamDeckClick);
    connect(FlowLauncher, &QPushButton::clicked, this, &MainWindow::FlowLauncherClick);
    connect(EpicGames, &QPushButton::clicked, this, &MainWindow::EpicGamesClick);
    connect(PowerToys, &QPushButton::clicked, this, &MainWindow::PowerToysClick);

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

void MainWindow::VSCodeClick()
{
    std::system("winget install Microsoft.VisualStudioCode");
}

void MainWindow::DiscordClick()
{
    std::system("winget install Discord.Discord");
}

void MainWindow::CurseForgeClick()
{
    std::system("winget install Overwolf.CurseForge");
}

void MainWindow::TeraCopyClick()
{
    std::system("winget install CodeSector.TeraCopy");
}

void MainWindow::GitHubDesktopClick()
{
    std::system("winget install GitHub.GitHubDesktop");
}

void MainWindow::LogitechGHUBClick()
{
    std::system("winget install Logitech.GHUB");
}

void MainWindow::MobaXTermClick()
{
    std::system("winget install Mobatek.MobaXterm");
}

void MainWindow::PlayniteClick()
{
    std::system("winget install Playnite.Playnite");
}

void MainWindow::AcrobatReaderClick()
{
    std::system("winget install Adobe.Acrobat.Reader.64-bit");
}

void MainWindow::StreamDeckClick()
{
    std::system("winget install Elgato.StreamDeck");
}

void MainWindow::FlowLauncherClick()
{
    std::system("winget install Flow-Launcher.Flow-Launcher");
}

void MainWindow::EpicGamesClick()
{
    std::system("winget install EpicGames.EpicGamesLauncher");
}

void MainWindow::PowerToysClick()
{
    std::system("winget install Microsoft.PowerToys");
}
