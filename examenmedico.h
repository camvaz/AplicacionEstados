#ifndef EXAMENMEDICO_H
#define EXAMENMEDICO_H

#include <QDialog>

namespace Ui {
class ExamenMedico;
}

class ExamenMedico : public QDialog
{
    Q_OBJECT

public:
    explicit ExamenMedico(QWidget *parent = nullptr);
    ~ExamenMedico();

private:
    Ui::ExamenMedico *ui;
};

#endif // EXAMENMEDICO_H
