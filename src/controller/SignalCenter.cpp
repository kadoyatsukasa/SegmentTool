//
// Created by manak on 2023/2/5.
//

#include "SignalCenter.h"

namespace SegmentsToolController {
    SignalCenter *SignalCenter::Instance() {
       static SignalCenter ins;
       return &ins;
    }
} // SegmentsToolController