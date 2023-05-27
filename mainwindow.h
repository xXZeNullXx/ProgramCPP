#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    void SevenZipClick();
    void BraveClick();
    void VSCodeClick();
    void DiscordClick();
    void CurseForgeClick();
    void TeraCopyClick();
    void GitHubDesktopClick();
    void LogitechGHUBClick();
    void MobaXTermClick();
    void PlayniteClick();
    void AcrobatReaderClick();
    void StreamDeckClick();
    void FlowLauncherClick();
    void EpicGamesClick();
    void PowerToysClick();

};
#endif // MAINWINDOW_H
