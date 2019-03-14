#include "historialclinico.h"
#include "ui_historialclinico.h"

HistorialClinico::HistorialClinico(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::HistorialClinico)
{
    ui->setupUi(this);
}

HistorialClinico::~HistorialClinico()
{
    delete ui;
}
