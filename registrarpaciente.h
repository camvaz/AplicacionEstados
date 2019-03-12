#ifndef REGISTRARPACIENTE_H
#define REGISTRARPACIENTE_H

#include <QDialog>

namespace Ui {
class RegistrarPaciente;
}

class RegistrarPaciente : public QDialog
{
    Q_OBJECT

public:
    explicit RegistrarPaciente(QWidget *parent = nullptr);
    ~RegistrarPaciente();

private:
    Ui::RegistrarPaciente *ui;
};

#endif // REGISTRARPACIENTE_H
