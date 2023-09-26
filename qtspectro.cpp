#include "qtspectro.h"

qtspectro::qtspectro(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::qtspectroClass())
{
    ui->setupUi(this);
}

qtspectro::~qtspectro()
{
    delete ui;
}
