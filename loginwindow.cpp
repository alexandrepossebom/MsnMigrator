#include "loginwindow.h"
#include "ui_loginwindow.h"

LoginWindow::LoginWindow(QWidget *parent) :
    QDialog(parent),
    m_ui(new Ui::LoginWindow)
{
    m_ui->setupUi(this);
}

LoginWindow::~LoginWindow()
{
    delete m_ui;
}

void LoginWindow::changeEvent(QEvent *e)
{
    QDialog::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        m_ui->retranslateUi(this);
        break;
    default:
        break;
    }
}
