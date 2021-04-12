#pragma once
#include "User.hpp"

class Lecturer : public User {
   public:
    std::string title;

    void info() const {
        std::cout << title << " ";
        User::info();
    }
};
