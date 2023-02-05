#include <QApplication>
#include "view/SegmentTool.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    std::shared_ptr<SegmentTool> app= std::make_shared<SegmentTool>();
    app->show();
    return QApplication::exec();
}
