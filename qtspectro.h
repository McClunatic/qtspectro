#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_qtspectro.h"

QT_BEGIN_NAMESPACE
namespace Ui { class qtspectroClass; };
QT_END_NAMESPACE

class qtspectro : public QMainWindow
{
    Q_OBJECT

public:
    qtspectro(QWidget *parent = nullptr);
    ~qtspectro();

private:
    Ui::qtspectroClass *ui;
};
