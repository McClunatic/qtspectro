#include "qtspectro.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    qputenv("QSG_RHI_BACKEND", "opengl");
    QApplication a(argc, argv);
    qtspectro w;
    w.show();
    return a.exec();
}
