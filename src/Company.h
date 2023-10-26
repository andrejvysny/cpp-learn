//
// Created by andrejvysny on 24.9.2023.
//

#ifndef BP_VIDEO_PROCESS_COMPANY_H
#define BP_VIDEO_PROCESS_COMPANY_H


#include "Human.h"
#include "Worker.h"

class Company {

    Worker user;

public:
    Worker getWorker() const;
    explicit Company(Worker user);
};


#endif //BP_VIDEO_PROCESS_COMPANY_H
