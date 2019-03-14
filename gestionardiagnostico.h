#ifndef GESTIONARDIAGNOSTICO_H
#define GESTIONARDIAGNOSTICO_H

#include <QDialog>

namespace Ui {
class GestionarDiagnostico;
}

class GestionarDiagnostico : public QDialog
{
    Q_OBJECT

public:
    explicit GestionarDiagnostico(QWidget *parent = nullptr);
    ~GestionarDiagnostico();

private:
    Ui::GestionarDiagnostico *ui;
};

#endif // GESTIONARDIAGNOSTICO_H
