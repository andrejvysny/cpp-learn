cmake_minimum_required(VERSION 3.26)
project(bp_video_process)

set(CMAKE_CXX_STANDARD 20)


find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})

add_executable(bp_video_process main.cpp
        Human.cpp
        Human.h
        Company.cpp
        Company.h
        Worker.cpp
        Worker.h
        src/stereo/StereoCapSync.cpp
        "include /StereoCapSync.h"
        src/video/CamCapFrame.cpp
        src/video/CamCapFrame.h
        src/control/motor.cpp
        src/control/motor.h
        src/modules/socketServer/WebSocketServer.cpp
        src/modules/socketServer/WebSocketServer.h)

target_link_libraries(bp_video_process ${OpenCV_LIBS})
