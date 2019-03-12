#include "menucaptura.h"
#include "ui_menucaptura.h"

MenuCaptura::MenuCaptura(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MenuCaptura)
{
    ui->setupUi(this);
}

MenuCaptura::~MenuCaptura()
{
    delete ui;
}
