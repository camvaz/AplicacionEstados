#ifndef MENUCAPTURA_H
#define MENUCAPTURA_H

#include <QMainWindow>

namespace Ui {
class MenuCaptura;
}

class MenuCaptura : public QMainWindow
{
    Q_OBJECT

public:
    explicit MenuCaptura(QWidget *parent = nullptr);
    ~MenuCaptura();

private:
    Ui::MenuCaptura *ui;
};

#endif // MENUCAPTURA_H
