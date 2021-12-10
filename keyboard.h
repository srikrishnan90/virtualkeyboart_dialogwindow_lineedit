#ifndef KEYBOARD_H
#define KEYBOARD_H

#include <QDialog>
#include <QDebug>



namespace Ui {
class keyboard;
}

class keyboard : public QDialog
{
    Q_OBJECT

public:
    explicit keyboard(QWidget *parent = nullptr);
    ~keyboard();
     QString getData();
     void setData(const QString &labelText, const QString &labelText1);

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();





    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();


private:
    Ui::keyboard *ui;
};

#endif // KEYBOARD_H
