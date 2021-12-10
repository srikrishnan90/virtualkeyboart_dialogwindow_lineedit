#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //connect (ui->lineEdit, SIGNAL(focusInEvent()), this, SLOT(on_pushButton_clicked()));
ui->lineEdit->setFocus();
connect(ui->lineEdit, SIGNAL(clicked()), this, SLOT(handlelineeditclicked()));
connect(ui->lineEdit_2, SIGNAL(clicked()), this, SLOT(handlelineeditclicked1()));
}

MainWindow::~MainWindow()
{
    delete ui;

}


void MainWindow::on_pushButton_clicked()
{
    QString er = "data";
    QString dr = "data";
    key = new keyboard(this);
    //key->setModal(true);--------------this blocks the virtual keyboard entry
    key->setData(er, dr);
    //key->exec(); --------------this blocks the virtual keyboard entry
    key->show();
    //key->raise();
    //key->activateWindow();
    if (key->exec()== QDialog::Accepted)//-----------only executing this(key->exec()) will copy the content from dialog to main
    {
        QString foo = key->getData();
        ui->lineEdit->setText(foo);
    }



}

void MainWindow::on_pushButton_2_clicked()
{
    key = new keyboard(this);
    key->setModal(true);
    key->exec();
    QString foo = key->getData();
    ui->lineEdit_2->setText(foo);
    //qDebug()<<foo;

}


void MainWindow::handlelineeditclicked()

{
    QString er = "data";
    QString dr=ui->lineEdit->text();
    key = new keyboard(this);
    //key->setModal(true);--------------this blocks the virtual keyboard entry
    key->setData(er, dr);
    //key->exec(); --------------this blocks the virtual keyboard entry
    key->show();
    //key->raise();
    //key->activateWindow();
    if (key->exec()== QDialog::Accepted)//-----------only executing this(key->exec()) will copy the content from dialog to main
    {
        QString foo = key->getData();
        ui->lineEdit->setText(foo);
    }

}

void MainWindow::handlelineeditclicked1()
{
    ui->lineEdit->setFocus();
    ui->lineEdit_2->setText("done");
}

