#ifndef MENUESPECIALISTA_H
#define MENUESPECIALISTA_H

#include <QMainWindow>

namespace Ui {
class MenuEspecialista;
}

class MenuEspecialista : public QMainWindow
{
    Q_OBJECT

public:
    explicit MenuEspecialista(QWidget *parent = nullptr);
    ~MenuEspecialista();

private:
    Ui::MenuEspecialista *ui;
};

#endif // MENUESPECIALISTA_H
