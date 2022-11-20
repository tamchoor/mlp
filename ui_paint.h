/********************************************************************************
** Form generated from reading UI file 'paint.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAINT_H
#define UI_PAINT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Paint
{
public:
    QGridLayout *gridLayout;
    QPushButton *send;
    QPushButton *reset;
    QGraphicsView *graphicsView;

    void setupUi(QWidget *Paint)
    {
        if (Paint->objectName().isEmpty())
            Paint->setObjectName("Paint");
        Paint->resize(398, 318);
        gridLayout = new QGridLayout(Paint);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName("gridLayout");
        send = new QPushButton(Paint);
        send->setObjectName("send");
        send->setMouseTracking(false);
        send->setAutoFillBackground(false);

        gridLayout->addWidget(send, 0, 1, 1, 1);

        reset = new QPushButton(Paint);
        reset->setObjectName("reset");

        gridLayout->addWidget(reset, 1, 1, 1, 1);

        graphicsView = new QGraphicsView(Paint);
        graphicsView->setObjectName("graphicsView");
        graphicsView->setEnabled(true);

        gridLayout->addWidget(graphicsView, 0, 0, 1, 1);


        retranslateUi(Paint);

        QMetaObject::connectSlotsByName(Paint);
    } // setupUi

    void retranslateUi(QWidget *Paint)
    {
        Paint->setWindowTitle(QCoreApplication::translate("Paint", "Paint", nullptr));
        send->setText(QCoreApplication::translate("Paint", "send", nullptr));
        reset->setText(QCoreApplication::translate("Paint", "reset", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Paint: public Ui_Paint {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAINT_H
