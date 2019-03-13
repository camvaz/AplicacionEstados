#include "busquedapaciente.h"
#include "ui_busquedapaciente.h"

BusquedaPaciente::BusquedaPaciente(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::BusquedaPaciente)
{
    ui->setupUi(this);
}

BusquedaPaciente::~BusquedaPaciente()
{
    delete ui;
}
