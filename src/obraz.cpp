#include "obraz.h"

QImage Obraz::cvmat_do_qimage(const cv::Mat &obraz, QImage::Format format)
{
    return QImage(obraz.data, obraz.cols, obraz.rows, obraz.step, format).copy();
}

template <typename typ1, typename typ2>
QImage Obraz::wyskaluj(typ1 obraz, typ2 *&label)
{
    if (obraz.width()>obraz.height())
    {
        return obraz = obraz.scaledToWidth(label->width(), Qt::SmoothTransformation);
    }
    else
    {
        return obraz = obraz.scaledToHeight(label->height(), Qt::SmoothTransformation);
    }
}

template QImage Obraz::wyskaluj(QImage obraz, QLabel *&label);
