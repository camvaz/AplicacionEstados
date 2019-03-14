#include "gestionardiagnostico.h"
#include "ui_gestionardiagnostico.h"

GestionarDiagnostico::GestionarDiagnostico(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::GestionarDiagnostico)
{
    ui->setupUi(this);
}

GestionarDiagnostico::~GestionarDiagnostico()
{
    delete ui;
}
