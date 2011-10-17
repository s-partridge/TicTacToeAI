#ifndef CUSTOMGRAPHICSVIEW_H
#define CUSTOMGRAPHICSVIEW_H

#include "qgraphicsview.h"

class CustomGraphicsView : public QGraphicsView
{
    Q_OBJECT

public:
//    CustomGraphicsView();
    CustomGraphicsView(QWidget *parent, int xCoord, int yCoord) : QGraphicsView(parent) { m_blankXorO = 0; }

public slots:
    void setBlankXorO(int blankXorO) { m_blankXorO = blankXorO; }
   // void actionOnClick() { emit

signals:
   // void

private:
    //Dictates what will be drawn to the graphics object.
    //1 represents X, 0 represents an empty space, and -1 represents an O.
    //TODO:  In the next iteration of this program, this will be replaced by an enumerated type for clarity.
    int m_blankXorO;
    int m_xCoord;
    int m_yCoord;
};

#endif // CUSTOMGRAPHICSVIEW_H
