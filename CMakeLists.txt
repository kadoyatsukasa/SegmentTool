cmake_minimum_required(VERSION 3.24)
project(SegmentTool)

# Set Qt Environment
set(ENV{QT_DIR} "C:/Path/Qt")
set(QT_VERSION 6)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)
set(QT_LIBS
        Core    Gui     Widgets)
set(QT_LIBS_QUALIFIED
        Qt::Core    Qt::Gui     Qt::Widgets)
#  Set CMake compiler
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_PREFIX_PATH "$ENV{QT_DIR}/6.6.0/mingw_64/")
# configure the project
## set sourcecode path
set(MODEL_PATH  src/model/)
set(VIEW_PATH   src/view/SegmentTool.cpp            src/view/SegmentTool.h              src/view/SegmentTool.ui
                src/view/widgets/NavigationBar.cpp  src/view/widgets/NavigationBar.h    src/view/widgets/NavigationBar.ui)
set(CONTROLLER_PATH src/controller/SignalCenter.cpp src/controller/SignalCenter.h)
set(UTILS_PATH  src/utils/UiBeautification.cpp src/utils/UiBeautification.h)
set(SRC_PATH    ${MODEL_PATH}   ${VIEW_PATH}
                ${CONTROLLER_PATH}  ${UTILS_PATH})
set(RES_PATH    res/styleSheets/dark/NavigationBarDark.qss
                res/styleSheets/light/)
## find project source files
include_directories(src/    src/model/      src/view/   src/controller/ src/utils/)
add_executable(${PROJECT_NAME}
        src/main.cpp    res/stylesheet.qrc
        ${SRC_PATH}     ${RES_PATH})
## use  packages
find_package(Qt${QT_VERSION} COMPONENTS ${QT_LIBS} REQUIRED)
## link to libraries
target_link_libraries(${PROJECT_NAME} ${QT_LIBS_QUALIFIED})
