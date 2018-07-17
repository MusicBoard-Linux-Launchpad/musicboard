#include "a"
#include "ui_preferences.h"

preferences::preferences(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::preferences)
{
    ui->setupUi(this);
}

preferences::~preferences()
{
    delete ui;
}

void preferences::changeEvent(QEvent *e)
{
    QDialog::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}
