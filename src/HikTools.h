#pragma once
#include "ui_HikTools.h"
#include <QMainWindow>

class HikTools : public QMainWindow {
    Q_OBJECT
    
public:
    HikTools(QWidget* parent = nullptr);
    ~HikTools();

private:
    Ui_HikTools* ui;
};