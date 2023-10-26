//
// Created by andrejvysny on 24.9.2023.
//

#include "Human.h"
#include <utility>
#include <iostream>

Human::Human(std::string name, int age) {
    this->name = std::move(name);
    this->age = age;
}

std::string Human::getName() {
    return this->name;
}

Human & Human::introcuce() const {
    std::cout << "My name is: "<< name <<std::endl;

    return (Human &) *this;
}