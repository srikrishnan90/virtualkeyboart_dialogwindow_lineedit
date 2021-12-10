#include "keyboard.h"
#include "ui_keyboard.h"

keyboard::keyboard(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::keyboard)
{
    ui->setupUi(this);

    //connect(ui->lineEdit, SIGNAL(returnPressed()), qApp->inputMethod(), SLOT(hide()));
    connect(ui->lineEdit, SIGNAL(returnPressed()), this, SLOT(on_pushButton_2_clicked()));
    //ui->lineEdit->setFocus();

}

keyboard::~keyboard()
{
    qDebug()<<ui->lineEdit->text();
    delete ui;

}

void keyboard::on_pushButton_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton->text());
}


void keyboard::on_pushButton_2_clicked()
{
getData();
this->accept();
}

QString keyboard::getData()
{
    return(ui->lineEdit->text());
}

void keyboard::setData(const QString &labelText, const QString &labelText1)
{
    ui->label->setText(labelText);
    ui->lineEdit->setText(labelText1);
}


void keyboard::on_pushButton_3_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_3->text());

}


void keyboard::on_pushButton_4_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_4->text());

}


void keyboard::on_pushButton_5_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_5->text());

}


void keyboard::on_pushButton_6_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_6->text());

}

