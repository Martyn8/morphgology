#include "morfologia.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Morfologia w;
    w.show();
    return a.exec();
}
