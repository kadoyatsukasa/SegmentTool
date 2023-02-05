//
// Created by manaka on 2023/2/5.
//

#ifndef SEGMENTTOOL_SEGMENTTOOL_H
#define SEGMENTTOOL_SEGMENTTOOL_H

#include <QMainWindow>


QT_BEGIN_NAMESPACE
namespace Ui { class SegmentTool; }
QT_END_NAMESPACE

class SegmentTool : public QMainWindow {
Q_OBJECT

public:
    explicit SegmentTool(QWidget *parent = nullptr);

    ~SegmentTool() override;

private:
    Ui::SegmentTool *ui;
};


#endif //SEGMENTTOOL_SEGMENTTOOL_H
