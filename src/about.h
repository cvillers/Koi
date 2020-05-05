#ifndef ABOUT_H
#define ABOUT_H

#include "license.h"

#include <QDialog>

namespace Ui {
class About;
}

class About : public QDialog
{
    Q_OBJECT

public:
    explicit About(QWidget *parent = nullptr);
    ~About();

private slots:
    void on_closeBtn_clicked();

    void on_licenseBtn_clicked();

private:
    Ui::About *ui;
};

#endif // ABOUT_H