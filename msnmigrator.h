#ifndef MSNMIGRATOR_H
#define MSNMIGRATOR_H

#include <QtGui/QMainWindow>

namespace Ui
{
    class MsnMigrator;
}

class MsnMigrator : public QMainWindow
{
    Q_OBJECT

public:
    MsnMigrator(QWidget *parent = 0);
    ~MsnMigrator();

private:
    Ui::MsnMigrator *ui;
};

#endif // MSNMIGRATOR_H
