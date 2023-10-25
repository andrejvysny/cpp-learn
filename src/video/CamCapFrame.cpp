//
// Created by andrejvysny on 26.9.2023.
//

#include "CamCapFrame.h"

namespace video {
    CamCapFrame::CamCapFrame(int camIndex) {
        this->cameraIndex = camIndex;
    }

    cv::Mat CamCapFrame::processFrame(cv::Mat frame) {



        return frame;
    }

} // video