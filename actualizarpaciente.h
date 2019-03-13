#ifndef ACTUALIZARPACIENTE_H
#define ACTUALIZARPACIENTE_H

#include <QDialog>

namespace Ui {
class ActualizarPaciente;
}

class ActualizarPaciente : public QDialog
{
    Q_OBJECT

public:
    explicit ActualizarPaciente(QWidget *parent = nullptr);
    ~ActualizarPaciente();

private:
    Ui::ActualizarPaciente *ui;
};

#endif // ACTUALIZARPACIENTE_H
