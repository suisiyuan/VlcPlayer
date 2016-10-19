#include "VlcPlayer.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    VlcPlayer w;
    w.show();
    return a.exec();
}
