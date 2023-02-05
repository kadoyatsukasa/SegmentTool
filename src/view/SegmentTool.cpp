//
// Created by manaka on 2023/2/5.
//

// You may need to build the project (run Qt uic code generator) to get "ui_SegmentTool.h" resolved

#include "SegmentTool.h"
#include "ui_SegmentTool.h"


SegmentTool::SegmentTool(QWidget *parent) :
        QMainWindow(parent), ui(new Ui::SegmentTool) {
    ui->setupUi(this);
}

SegmentTool::~SegmentTool() {
    delete ui;
}
