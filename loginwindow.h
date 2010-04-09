#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H

#include <QtGui/QDialog>

namespace Ui {
    class LoginWindow;
}

class LoginWindow : public QDialog {
    Q_OBJECT
public:
    LoginWindow(QWidget *parent = 0);
    ~LoginWindow();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::LoginWindow *m_ui;
};

#endif // LOGINWINDOW_H
