// Implementation of dungeonmap functionality

#include "dungeonmap.h"
#include <QImage>
#include <Qt>

QImage& generatemap(int h, int w)
{
    QImage *img = new QImage(10, 10, QImage::Format_ARGB32);

    img->fill(Qt::darkRed);
    return *img;
}