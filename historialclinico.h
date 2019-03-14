#ifndef HISTORIALCLINICO_H
#define HISTORIALCLINICO_H

#include <QDialog>

namespace Ui {
class HistorialClinico;
}

class HistorialClinico : public QDialog
{
    Q_OBJECT

public:
    explicit HistorialClinico(QWidget *parent = nullptr);
    ~HistorialClinico();

private:
    Ui::HistorialClinico *ui;
};

#endif // HISTORIALCLINICO_H
