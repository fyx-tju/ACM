#include <QtGui/QApplication>
#include "acm.h"


int main(int argc, char** argv)
{
    QApplication app(argc, argv);
    acm acm;
    acm.show();
    return app.exec();
}
