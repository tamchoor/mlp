#include <QHBoxLayout>
#include <QLabel>
#include <QPushButton>
#include <QApplication>
#include "Paint.h"
 
int main(int argc, char *argv[])
{
    QApplication qapp(argc, argv);
    // QHBoxLayout * hlayout = new QHBoxLayout;
    // QLabel *label = new QLabel("Привет мир!");
    // QPushButton *butt = new QPushButton("Exit");
    // QWidget *mainWindow = new QWidget;
    // QObject::connect(butt,SIGNAL(clicked()),&qapp,SLOT(quit()));
    // hlayout->addWidget(label);
    // hlayout->addWidget(butt);
    // mainWindow->setLayout(hlayout);
    // mainWindow->show();
    Paint w;
    w.show();
    return qapp.exec();
}
