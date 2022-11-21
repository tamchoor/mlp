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
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Paint
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QPushButton *reset;
    QPushButton *send;
    QLineEdit *lineEdit;
    QSpacerItem *horizontalSpacer;
    QGraphicsView *graphicsView;
    QLabel *label_2;
    QPushButton *sendImg;

    void setupUi(QWidget *Paint)
    {
        if (Paint->objectName().isEmpty())
            Paint->setObjectName("Paint");
        Paint->resize(364, 448);
        gridLayout = new QGridLayout(Paint);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName("gridLayout");
        label = new QLabel(Paint);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        reset = new QPushButton(Paint);
        reset->setObjectName("reset");

        gridLayout->addWidget(reset, 5, 1, 1, 1);

        send = new QPushButton(Paint);
        send->setObjectName("send");
        send->setMouseTracking(false);
        send->setAutoFillBackground(false);

        gridLayout->addWidget(send, 4, 1, 1, 1);

        lineEdit = new QLineEdit(Paint);
        lineEdit->setObjectName("lineEdit");

        gridLayout->addWidget(lineEdit, 1, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 0, 1, 1);

        graphicsView = new QGraphicsView(Paint);
        graphicsView->setObjectName("graphicsView");
        graphicsView->setEnabled(true);

        gridLayout->addWidget(graphicsView, 4, 0, 1, 1);

        label_2 = new QLabel(Paint);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 3, 0, 1, 1);

        sendImg = new QPushButton(Paint);
        sendImg->setObjectName("sendImg");

        gridLayout->addWidget(sendImg, 1, 1, 1, 1);


        retranslateUi(Paint);

        QMetaObject::connectSlotsByName(Paint);
    } // setupUi

    void retranslateUi(QWidget *Paint)
    {
        Paint->setWindowTitle(QCoreApplication::translate("Paint", "Paint", nullptr));
        label->setText(QCoreApplication::translate("Paint", "Input path to the img in bmp format", nullptr));
        reset->setText(QCoreApplication::translate("Paint", "reset", nullptr));
        send->setText(QCoreApplication::translate("Paint", "send", nullptr));
        label_2->setText(QCoreApplication::translate("Paint", "Draw new img", nullptr));
        sendImg->setText(QCoreApplication::translate("Paint", "send", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Paint: public Ui_Paint {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAINT_H
