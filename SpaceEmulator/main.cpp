#include "SpaceEmulator.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SpaceEmulator w;
    w.show();

    return a.exec();
}
