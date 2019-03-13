#include "actualizarpaciente.h"
#include "ui_actualizarpaciente.h"

ActualizarPaciente::ActualizarPaciente(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ActualizarPaciente)
{
    ui->setupUi(this);
}

ActualizarPaciente::~ActualizarPaciente()
{
    delete ui;
}
