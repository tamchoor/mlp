#include "Paint.h"
#include "ui_paint.h"
 
Paint::Paint(QWidget *parent) :
	QWidget(parent),
	ui(new Ui::Paint)
{
	ui->setupUi(this);
 
	scene = new paintScene();       // Инициализируем графическую сцену
	ui->graphicsView->setScene(scene);  // Устанавливаем графическую сцену
 
	timer = new QTimer();       // Инициализируем таймер
	connect(timer, &QTimer::timeout, this, &Paint::slotTimer);

	connect(ui->send, SIGNAL (released()), this, SLOT (handleButtonSend()));
	connect(ui->sendImg, SIGNAL (released()), this, SLOT (handleButtonSendImg()));
	connect(ui->reset, SIGNAL (released()), this, SLOT (handleButtonReset()));
	timer->start(100);          // Запускаем таймер
}
 
Paint::~Paint()
{
	delete ui;
}
 
void Paint::slotTimer()
{
	/* Переопределяем размеры графической сцены в зависимости
	 * от размеров окна
	 * */
	timer->stop();
	scene->setSceneRect(0,0, ui->graphicsView->width() - 20, ui->graphicsView->height() - 20);
}

void Paint::handleButtonSend()
{
	// ui->send->setText(QCoreApplication::translate("Paint", "SENDD", nullptr));
	scene->printImg();
}

void Paint::handleButtonSendImg()
{
	// ui->send->setText(QCoreApplication::translate("Paint", "SENDD", nullptr));
	std::string str = ui->lineEdit->text().toStdString();
	std::cout << str << std::endl;
}

void Paint::handleButtonReset()
{
	// ui->reset->setText(QCoreApplication::translate("Paint", "RESET", nullptr));
	scene->clear();
	scene->bzeroImg();
	scene->addFrame();
}

void Paint::resizeEvent(QResizeEvent *event)
{
	timer->start(100);
	QWidget::resizeEvent(event);
}
