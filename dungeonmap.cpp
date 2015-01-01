// Implementation of dungeonmap functionality

#include "dungeonmap.h"
#include <QImage>
#include <Qt>

QImage& generatemap(int h, int w)
{
    QImage *img = new QImage;

    img->fill(Qt::darkRed);
    return *img;
}