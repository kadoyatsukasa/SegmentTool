//
// Created by manak on 2023/2/5.
//

#include <QFile>
#include "UiBeautification.h"

namespace SegmentToolUi {
    QString UiBeautification::GetStyleSheet(const QString& filepath)
    {
        QFile _qssFile(filepath);
        _qssFile.open(QFile::ReadOnly);
        QString _qssString;
        _qssString = _qssFile.readAll();
        _qssFile.close();
        return _qssString;
    }

    UiBeautification *UiBeautification::Instance() {
        static UiBeautification ins;
        return &ins;

    }
} // SegmentToolUi