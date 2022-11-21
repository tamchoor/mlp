#ifndef PAINTSCENE_H
#define PAINTSCENE_H
 
#include <QGraphicsScene>
#include <QGraphicsSceneMouseEvent>
#include <QTimer>
#include <QDebug>
#include <iostream>
#include <math.h>

#define WIDTH_MTRX		26
#define HEIGHT_MTRX		26
#define WIDTH_WINDOW		260
#define HEIGHT_WINDOW	260
#define HEIGHT_SIZE_DIFF 	HEIGHT_WINDOW/HEIGHT_MTRX
#define WIDTH_SIZE_DIFF 	WIDTH_WINDOW/WIDTH_MTRX
 
class paintScene : public QGraphicsScene
{
	Q_OBJECT
 
public:
	explicit paintScene(QObject *parent = 0);
	~paintScene();

	void printImg();
	void bzeroImg();
	void addFrame();
 
private:
	QPointF     previousPoint;      // Координаты предыдущей точки
 
private:
	// Для рисования используем события мыши
	void mousePressEvent(QGraphicsSceneMouseEvent * event);
	void mouseMoveEvent(QGraphicsSceneMouseEvent *event);

	int mtrx[HEIGHT_MTRX][WIDTH_MTRX][1];

 
};
 
#endif // PAINTSCENE\_H