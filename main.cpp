#include <QtGui/QApplication>
#include "msnmigrator.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MsnMigrator w;
    w.show();
    return a.exec();
}
