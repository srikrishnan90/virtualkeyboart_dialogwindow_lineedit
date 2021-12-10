#include "mylineedit.h"

mylineedit::mylineedit(QWidget *parent) :

    QLineEdit(parent)

{

}

// rewrite mousePressEvent event , Check whether the event type is left click

void mylineedit::mousePressEvent(QMouseEvent *event)

{

    // If you click, it triggers clicked The signal

    if (event->button() == Qt::LeftButton)

    {

        // Trigger clicked The signal

        emit clicked();

    }

    // Pass the event to the parent class for processing

    QLineEdit::mousePressEvent(event);

}
