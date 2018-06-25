#ifndef TEXT_DEMO_H
#define TEXT_DEMO_H

#include "mainwindow.h"
#include <QApplication>
#include <QtWidgets>

int text_demo(int argc, char *argv[])
{

    QApplication app(argc, argv);
    QWidget base_widget;

    //имя окна
    base_widget.setWindowTitle("Qt Text");

    QLabel *label_display = new QLabel("Bla bla label");
    //рамка вокруг виджета
    label_display->setFrameStyle(QFrame::Box | QFrame::Raised);
    //толщина рамки
    label_display->setLineWidth(2);
    //фиксорованная высота виджета
    label_display->setFixedHeight(50);

    QLabel *label_text = new QLabel("Text:");
    //однострочное текстовое поле
    QLineEdit *edit_text = new QLineEdit();
    //связываем лайбл и текстовое поле
    label_text->setBuddy(edit_text);


    QLabel *label_password = new QLabel("&Password:");
    QLineEdit *edit_password = new QLineEdit();
    label_password->setBuddy(edit_password);
    edit_password->setEchoMode(QLineEdit::Password);

    //слой для отображения виджетов
    QVBoxLayout *base_layout = new QVBoxLayout();

//    base_layout->addWidget(label_display);
    base_layout->addWidget(label_text);
    base_layout->addWidget(edit_text);
    base_layout->addWidget(label_password);
    base_layout->addWidget(edit_password);
    base_widget.setLayout(base_layout);

    base_widget.show();

    return app.exec();
}



#endif // TEXT_DEMO_H
