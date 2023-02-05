//
// Created by manaka on 2023/2/5.
//

// You may need to build the project (run Qt uic code generator) to get "ui_NavigationBar.h" resolved

#include <QStylePainter>
#include <QStyleOption>
#include <QButtonGroup>
#include <iostream>
#include "controller/SignalCenter.h"
#include "NavigationBar.h"
#include "ui_NavigationBar.h"
#include "utils/UiBeautification.h"

namespace SegmentToolWidgets {
    NavigationBar::NavigationBar(QWidget *parent) :
            QWidget(parent), ui(new Ui::NavigationBar) {
        ui->setupUi(this);
        SetView();
    }

    NavigationBar::~NavigationBar() {
        delete ui;
    }

    void NavigationBar::paintEvent(QPaintEvent *event) {
        QStylePainter _stylePainter(this);
        QStyleOption _styleOpt;
        _styleOpt.initFrom(this);
        _styleOpt.rect = rect();
        _stylePainter.drawPrimitive(QStyle::PE_Widget,_styleOpt);

        QWidget::paintEvent(event);
    }

    void NavigationBar::SetView()
    {
        setStyleSheet(SegmentToolUi::UiBeautification::Instance()->GetStyleSheet("://styleSheets/dark/NavigationBarDark.qss"));
        buttonGroup = new QButtonGroup(this);
        buttonGroup->setExclusive(true);

        int _buttonId =0;
        for (QPushButton *button: this->findChildren<QPushButton *>())
        {

            button->setCheckable(true);
            buttonList.push_back(button);
            buttonGroup->addButton(button,_buttonId);
            _buttonId++;
        }

        connect(buttonGroup,&QButtonGroup::idClicked,[=](int id){
            std::cout<<"current ID:"<<id<<std::endl;
            emit SegmentsToolController::SignalCenter::Instance()->ChangePageID(id);
        });

    }
} // SegmentToolWidgets
