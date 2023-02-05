//
// Created by manaka on 2023/2/5.
//

#ifndef SEGMENT_TOOL_NAVIGATION_BAR_H
#define SEGMENT_TOOL_NAVIGATION_BAR_H

#include <QWidget>
#include <QPushButton>
#include "controller/SignalCenter.h"

namespace SegmentToolWidgets {
    QT_BEGIN_NAMESPACE
    namespace Ui { class NavigationBar; }
    QT_END_NAMESPACE

    class NavigationBar : public QWidget {
    Q_OBJECT

    public:
        explicit NavigationBar(QWidget *parent = nullptr);
        ~NavigationBar() override;
    protected:
        void paintEvent(QPaintEvent *event) override;
    private:
        void SetView();
    private:
        Ui::NavigationBar *ui;
        std::vector<QPushButton*> buttonList;
        QButtonGroup* buttonGroup;

    };
} // SegmentToolWidgets

#endif //SEGMENT_TOOL_NAVIGATION_BAR_H
