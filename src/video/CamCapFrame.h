//
// Created by andrejvysny on 26.9.2023.
//

#ifndef BP_VIDEO_PROCESS_CAMCAPFRAME_H
#define BP_VIDEO_PROCESS_CAMCAPFRAME_H

#include <opencv2/opencv.hpp>

namespace video {

    class CamCapFrame {

    private:

        cv::Mat currentFrame;
        int cameraIndex;

    public:
        explicit CamCapFrame(int camIndex);


        cv::Mat prepareFrame(cv::Mat frame);

        void captureFrame();
    };

} // video

#endif //BP_VIDEO_PROCESS_CAMCAPFRAME_H
