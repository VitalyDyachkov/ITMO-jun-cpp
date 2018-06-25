#ifndef LAYOUTS_DEMO_H
#define LAYOUTS_DEMO_H
#include "mainwindow.h"
#include <QApplication>
#include <QtWidgets>

QLayout *gridLayoutDemo()
{
    QPushButton* buttom1 = new QPushButton("Buttom 1");
    QPushButton* buttom2 = new QPushButton("Buttom 2");
    QPushButton* buttom3 = new QPushButton("Buttom 3");
    QPushButton* buttom4 = new QPushButton("Buttom 4");

    QGridLayout* grid_layout = new QGridLayout;
    grid_layout->addWidget(buttom1, 0, 0);
    grid_layout->addWidget(buttom2, 1, 0);
    grid_layout->addWidget(buttom3, 0, 1);
    grid_layout->addWidget(buttom4, 1, 1);

    return grid_layout;
}


QLayout *boxHLayoutDemo()
{
    QPushButton* buttom1 = new QPushButton("Buttom 1");
    QPushButton* buttom2 = new QPushButton("Buttom 2");
    QPushButton* buttom3 = new QPushButton("Buttom 3");

    QVBoxLayout* hbox_layout = new QVBoxLayout;
    hbox_layout->setMargin(10);
    hbox_layout->setSpacing(20);
    hbox_layout->addWidget(buttom1);
    hbox_layout->addWidget(buttom2);
    hbox_layout->addWidget(buttom3);

    return hbox_layout;
}

QLayout *boxLayoutDemo()
{
    QBoxLayout *layout = new QBoxLayout(QBoxLayout::TopToBottom);

    QLabel *label1 = new QLabel("Label1");
    label1->setFrameStyle(QFrame::Box | QFrame::Raised);

    QLabel *label2 = new QLabel("Label2");
    label2->setFrameStyle(QFrame::Box | QFrame::Raised);

    QLabel *label3 = new QLabel("Label3");
    label3->setFrameStyle(QFrame::Box | QFrame::Raised);

    QLabel *label4 = new QLabel("Label4");
    label4->setFrameStyle(QFrame::Box | QFrame::Raised);

    QLabel *label5 = new QLabel("Label5");
    label5->setFrameStyle(QFrame::Box | QFrame::Raised);

    layout->addWidget(label1);
    layout->addWidget(label2);
    layout->addWidget(label3);
    layout->addWidget(label4);
    layout->addWidget(label5);

    return layout;
}


int layouts_demo(int argc, char *argv[])
{
    QApplication app(argc, argv);
    //создание базового виджета
    QWidget base_widget;
    //имя окна
    base_widget.setWindowTitle("QGridBoxLayout");

    //устанавливаем слой для базового виджета
    base_widget.setLayout(gridLayoutDemo());

    //отрисовываем базовый виджет
    base_widget.show();

    return app.exec();
}

#endif // LAYOUTS_DEMO_H
