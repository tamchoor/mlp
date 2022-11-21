#include "PaintScene.h"

void paintScene::printImg()
{
    int x = 0, y = 0;
    while (y < HEIGHT_MTRX)
    {
        x = 0;
        while (x < WIDTH_MTRX)
        {
            std::cout << img[y][x][0];
            ++x;
        }
        std::cout << "\n";
        ++y;
    }
}

void paintScene::bzeroImg()
{
    int x = 0, y = 0;
    while (y < HEIGHT_MTRX)
    {
        x = 0;
        while (x < WIDTH_MTRX)
        {
            img[y][x][0] = 0;
            ++x;
        }
        ++y;
    }
}

void paintScene::addFrame()
{
    addLine(0,0,0,HEIGHT_WINDOW,
            QPen(Qt::blue,10,Qt::SolidLine,Qt::RoundCap));
    addLine(0,0,WIDTH_WINDOW,0,
            QPen(Qt::blue,10,Qt::SolidLine,Qt::RoundCap));
    addLine(WIDTH_WINDOW,0,WIDTH_WINDOW,HEIGHT_WINDOW,
            QPen(Qt::blue,10,Qt::SolidLine,Qt::RoundCap));
    addLine(0,HEIGHT_WINDOW,WIDTH_WINDOW,HEIGHT_WINDOW,
            QPen(Qt::blue,10,Qt::SolidLine,Qt::RoundCap));
}
 
paintScene::paintScene(QObject *parent) : QGraphicsScene(parent)
{
    bzeroImg();
    addFrame();
}
 
paintScene::~paintScene()
{
}
 
void paintScene::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    // При нажатии кнопки мыши отрисовываем эллипс
    addEllipse(event->scenePos().x(),
               event->scenePos().y(),
               10,
               10,
               QPen(Qt::NoPen),
               QBrush(Qt::red));

    // Сохраняем координаты точки нажатия
    
    previousPoint = event->scenePos();
    // std::cout << "previousPoint.x()  = "<< previousPoint.x() << "\n";
    // std::cout << "previousPoint.y()  = "<< previousPoint.y() << "\n";
    int newX = round(previousPoint.x()/WIDTH_SIZE_DIFF), newY = round(previousPoint.y()/WIDTH_SIZE_DIFF);
    if (newX >= 0 && newY >= 0 && newX <= WIDTH_MTRX && newY <= HEIGHT_MTRX)
    {
        img[newY][newX][0] = 1;
    }
}
 
void paintScene::mouseMoveEvent(QGraphicsSceneMouseEvent *event)
{
    // Отрисовываем линии с использованием предыдущей координаты
    addLine(previousPoint.x(),
            previousPoint.y(),
            event->scenePos().x(),
            event->scenePos().y(),
            QPen(Qt::red,10,Qt::SolidLine,Qt::RoundCap));

    // std::cout << "previousPoint.x()  = "<< previousPoint.x() << "\n";
    // std::cout << "previousPoint.y()  = "<< previousPoint.y() << "\n";
    // Обновляем данные о предыдущей координате

    
    int newX = round(previousPoint.x()/WIDTH_SIZE_DIFF), newY = round(previousPoint.y()/WIDTH_SIZE_DIFF);
    if (newX >= 0 && newY >= 0 && newX <= WIDTH_MTRX && newY <= HEIGHT_MTRX)
    {
        img[newY][newX][0] = 1;
    }
}