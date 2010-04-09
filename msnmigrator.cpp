#include "msnmigrator.h"
#include "ui_msnmigrator.h"

MsnMigrator::MsnMigrator(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MsnMigrator)
{
    ui->setupUi(this);
}

MsnMigrator::~MsnMigrator()
{
    delete ui;
}
