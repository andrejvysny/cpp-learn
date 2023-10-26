//
// Created by andrejvysny on 24.9.2023.
//

#include <string>
#include <stdio.h>

#ifndef BP_VIDEO_PROCESS_HUMAN_H
#define BP_VIDEO_PROCESS_HUMAN_H

using namespace std;

class Human {
    std::string name;
    int age;

public:
    std::string getName();
    Human(std::string name, int age);

    Human & introcuce() const;
};


#endif //BP_VIDEO_PROCESS_HUMAN_H
