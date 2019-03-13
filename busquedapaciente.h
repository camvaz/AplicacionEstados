#ifndef BUSQUEDAPACIENTE_H
#define BUSQUEDAPACIENTE_H

#include <QDialog>

namespace Ui {
class BusquedaPaciente;
}

class BusquedaPaciente : public QDialog
{
    Q_OBJECT

public:
    explicit BusquedaPaciente(QWidget *parent = nullptr);
    ~BusquedaPaciente();

private:
    Ui::BusquedaPaciente *ui;
};

#endif // BUSQUEDAPACIENTE_H
