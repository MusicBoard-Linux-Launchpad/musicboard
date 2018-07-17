#ifndef A
#define A

#include <QtGui/QDialog>

namespace Ui {
class preferences;
}

class preferences : public QDialog
{
    Q_OBJECT

public:
    explicit preferences(QWidget *parent = 0);
    ~preferences();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::preferences *ui;
};

#endif // A
