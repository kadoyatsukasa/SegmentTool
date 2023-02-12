#include "HikTools.h"

HikTools::HikTools(QWidget* parent)
    : QMainWindow(parent)
    , ui(new Ui_HikTools)
{
    ui->setupUi(this);
}

HikTools::~HikTools()
{
    delete ui; 
}