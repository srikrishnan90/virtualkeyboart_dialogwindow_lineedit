#ifndef MYLINEEDIT_H

#define MYLINEEDIT_H

#include <QLineEdit>

#include <QMouseEvent>

class mylineedit: public QLineEdit

{

    Q_OBJECT

public:

   mylineedit();

    explicit mylineedit(QWidget *parent = 0);

protected:

    // rewrite mousePressEvent event

    virtual void mousePressEvent(QMouseEvent *event);

signals:

    // Customize clicked() The signal , stay mousePressEvent Trigger when an event occurs

    void clicked();

public slots:

};

#endif // MYLINEEDIT_H
