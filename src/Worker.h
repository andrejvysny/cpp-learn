//
// Created by andrejvysny on 24.9.2023.
//

#ifndef BP_VIDEO_PROCESS_WORKER_H
#define BP_VIDEO_PROCESS_WORKER_H


#include "Human.h"

class Worker : public Human{

    int hours{};

public:
    int getHours() const;
    Worker(std::string name, int age, int hours);

    void workingHours() const;
};


#endif //BP_VIDEO_PROCESS_WORKER_H
