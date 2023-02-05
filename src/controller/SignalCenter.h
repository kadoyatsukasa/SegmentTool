//
// Created by manak on 2023/2/5.
//

#ifndef SEGMENT_TOOL_SIGNAL_CENTER_H
#define SEGMENT_TOOL_SIGNAL_CENTER_H
#include <QObject>


namespace SegmentsToolController {

    class SignalCenter: public  QObject{
        Q_OBJECT

    public:

        static SignalCenter* Instance();
        ~SignalCenter() override = default;

    public:
        signals:
        void ChangePageID(int id);
    private:
        SignalCenter() = default;
    };

} // SegmentsToolController

#endif //SEGMENT_TOOL_SIGNAL_CENTER_H
