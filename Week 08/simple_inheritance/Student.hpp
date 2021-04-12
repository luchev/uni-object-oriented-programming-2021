#pragma once
#include "User.hpp"

class Student : public User {
   public:
    int fn;

    void info() const {
        User::info();
        std::cout << "fn: " << fn << "\n";
    }
};
