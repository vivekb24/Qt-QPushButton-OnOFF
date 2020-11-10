#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>
#include <QPalette>
#include <QMessageBox>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_aOnOff_PB_clicked();
    void on_bOnOff_PB_clicked();
    void on_cOnOff_PB_clicked();
    void on_dOnOff_PB_clicked();
    void on_eOnOff_PB_clicked();
    void on_enable_PB_clicked();

    void on_disable_PB_clicked();

    void on_LogInPB_clicked();

    void on_clearPB_clicked();

    void on_eOnOff_PB_toggled(bool checked);

    void on_onOffPB_toggled(bool checked);

private:
    Ui::MainWindow *ui;
    int count;
    QPalette p;
};

#endif // MAINWINDOW_H
