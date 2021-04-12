#pragma once
#include <cstring>
#include <iostream>
#include "User.hpp"

class Student : public User {
   public:
    int fn;
    Student(const char* name, int fn) : fn(fn), User(name) {
        std::cout << "Construct Student\n";
    }

    ~Student() {
        std::cout << "Destruct Student\n";
    }

    // Student& operator=(const Student& rhs) {
    //     User::operator=(rhs);
    // }
};
