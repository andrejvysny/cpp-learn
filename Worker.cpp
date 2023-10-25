//
// Created by andrejvysny on 24.9.2023.
//

#include "Worker.h"
#include <iostream>
#include <utility>

Worker::Worker(std::string name, int age, int hours) : Human(std::move(name), age) {
    this->hours = hours;
}

int Worker::getHours() const {
    return this->hours;
}

void Worker::workingHours() const{
    std::cout << "I am working in: " << hours << std::endl;
}

