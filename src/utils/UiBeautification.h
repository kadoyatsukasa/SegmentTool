//
// Created by manak on 2023/2/5.
//

#ifndef SEGMENTTOOL_UIBEAUTIFICATION_H
#define SEGMENTTOOL_UIBEAUTIFICATION_H

#include <QString>

namespace SegmentToolUi {

    class UiBeautification {
    public:
        static UiBeautification* Instance();
        ~UiBeautification() = default;
        QString GetStyleSheet(const QString& filepath);

    private:
        UiBeautification() = default;
    };

} // SegmentToolUi

#endif //SEGMENTTOOL_UIBEAUTIFICATION_H
