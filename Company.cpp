//
// Created by andrejvysny on 24.9.2023.
//

#include "Company.h"

#include <utility>

Company::Company(Worker user) : user(std::move(user)) {
}

Worker Company::getWorker() const {
    return user;
}
