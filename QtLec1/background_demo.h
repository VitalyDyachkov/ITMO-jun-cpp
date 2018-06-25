#ifndef BACKGROUND_DEMO_H
#define BACKGROUND_DEMO_H


#include "mainwindow.h"
#include <QApplication>
#include <QtWidgets>

int background_demo(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    //установка названия окна
    w.setWindowTitle("First Qt Lection");

    // создадим базовый виджет
    QWidget base;
    QWidget *blue_widget = new QWidget(&base);
    QPalette palette;

    palette.setColor(blue_widget->backgroundRole(), Qt::blue);

//    auto x = blue_widget->backgroundRole();
//    pallete.setColor(QPalette::ColorRole::Background, Qt::blue);

    //устанавливаем палитру для виджета
    blue_widget->setPalette(palette);
    //заполнение области цветом
    blue_widget->setAutoFillBackground(true);
    //изменение размера виджета
    blue_widget->resize(40, 40);
    //изменение расположения виджета
    blue_widget->move(10, 50);

    //устанавливаем виджет base как основной
    w.setCentralWidget(&base);

    //отображаем окно
    w.show();

    //возвращаем результат выполнения
    return a.exec();
}


#endif
