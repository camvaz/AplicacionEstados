#include "registrarpaciente.h"
#include "ui_registrarpaciente.h"

RegistrarPaciente::RegistrarPaciente(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RegistrarPaciente)
{
    ui->setupUi(this);
}

RegistrarPaciente::~RegistrarPaciente()
{
    delete ui;
}
