#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    count=0;
    ui->aOnOff_PB->setAutoFillBackground(true);
    ui->bOnOff_PB->setAutoFillBackground(true);
    ui->dOnOff_PB->setIcon(QIcon(":/save.png"));
    ui->eOnOff_PB->setCheckable(true);
    ui->onOffPB->setCheckable(true);
    ui->onOffPB->setIcon(QIcon(":/On.png"));

    QAction *a1 = new QAction("PB One");
    QAction *a2 = new QAction("PB Two");
    QAction *a3 = new QAction("PB Three");
    QMenu *pushButtonMenu = new QMenu();
    pushButtonMenu->addAction(a1);
    pushButtonMenu->addAction(a2);
    pushButtonMenu->addAction(a3);
    ui->pbMenu->setMenu(pushButtonMenu);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_aOnOff_PB_clicked()
{
    count++;
    if(count%2==1)
    {
        qDebug()<<"true:"<<count%2;
        ui->aOnOff_PB->setFlat(true);
        ui->aOnOff_PB->setText("ON");
        ui->aOnOffStatus_LE->setText("ON");
        p.setColor(QPalette::Button,Qt::green);
        ui->aOnOff_PB->setPalette(p);

    }else if (count%2==0)
    {
        qDebug()<<"false:"<<count%2;
        ui->aOnOff_PB->setFlat(false);
        ui->aOnOff_PB->setText("OFF");
        ui->aOnOffStatus_LE->setText("OFF");
        p.setColor(QPalette::Button,QColor(Qt::red));
        ui->aOnOff_PB->setPalette(p);
    }
}

void MainWindow::on_bOnOff_PB_clicked()
{
    count++;
    if(count%2==1)
    {
        qDebug()<<"true:"<<count%2;
        ui->bOnOff_PB->setFlat(true);
        ui->bOnOff_PB->setText("ON");
        ui->bOnOffStatus_LE->setText("ON");
        p.setColor(QPalette::Button,Qt::green);
        ui->bOnOff_PB->setPalette(p);

    }else if (count%2==0)
    {
        qDebug()<<"false:"<<count%2;
        ui->bOnOff_PB->setFlat(false);
        ui->bOnOff_PB->setText("OFF");
        ui->bOnOffStatus_LE->setText("OFF");
        p.setColor(QPalette::Button,Qt::red);
        ui->bOnOff_PB->setPalette(p);

    }
}

void MainWindow::on_cOnOff_PB_clicked()
{
    ui->cOnOff_PB->setIcon(QIcon(":/open.png"));
}

void MainWindow::on_dOnOff_PB_clicked()
{

}

void MainWindow::on_eOnOff_PB_clicked()
{

}

void MainWindow::on_enable_PB_clicked()
{
    ui->actionStatus->setEnabled(true);
    ui->actionStatus->setText("Enabled...");
}

void MainWindow::on_disable_PB_clicked()
{
    ui->actionStatus->setEnabled(false);
    ui->actionStatus->setText("Disabled...");
}

void MainWindow::on_LogInPB_clicked()
{
    QString uName,uPwd;
    uName=ui->uNameLE->text();
    uPwd=ui->uPwd->text();

    if(uName=="a"&&uPwd=="a")
    {
        ui->statusBar->showMessage("LoggedIn.........",2000);
        ui->LogInStatusPB->setText("Logged in....");
        QMessageBox::information(this,"LogIn","Logged in....");

    }else {
        ui->statusBar->showMessage("Incorrect User Name and Password",2000);
        ui->LogInStatusPB->setText("Incorrect User Name and Password");
        QMessageBox::information(this,"LogIn","Incorrect User Name and Password");

    }

}

void MainWindow::on_clearPB_clicked()
{
    ui->uNameLE->clear();
    ui->uPwd->clear();
    ui->LogInStatusPB->setText(" ");
}

void MainWindow::on_eOnOff_PB_toggled(bool checked)
{
    if(checked){
        qDebug()<<"Button Checked---ON----";
        ui->eOnOffStatus_LE->setText("ON");
        ui->eOnOff_PB->setIcon(QIcon(":/On.png"));
    }else {
        qDebug()<<"Button Checked---OFF----";
        ui->eOnOffStatus_LE->setText("OFF");
        ui->eOnOff_PB->setIcon(QIcon(":/OFF.png"));
    }
}
void MainWindow::on_onOffPB_toggled(bool checked)
{
    if(checked){
        qDebug()<<"Button Checked---ON----";
        ui->OnOffStatus->setText("ON");
        ui->onOffPB->setIcon(QIcon(":/OFF.png"));

    }else {
        qDebug()<<"Button Checked---OFF----";
        ui->OnOffStatus->setText("OFF");
        ui->onOffPB->setIcon(QIcon(":/On.png"));
    }
}
