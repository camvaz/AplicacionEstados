#include "menuespecialista.h"
#include "ui_menuespecialista.h"

MenuEspecialista::MenuEspecialista(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MenuEspecialista)
{
    ui->setupUi(this);
}

MenuEspecialista::~MenuEspecialista()
{
    delete ui;
}
