#include "qtspectro.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    qtspectro w;
    w.show();
    return a.exec();
}
