#include "examenmedico.h"
#include "ui_examenmedico.h"

ExamenMedico::ExamenMedico(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ExamenMedico)
{
    ui->setupUi(this);
}

ExamenMedico::~ExamenMedico()
{
    delete ui;
}
