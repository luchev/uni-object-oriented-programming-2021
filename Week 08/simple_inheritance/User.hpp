#pragma once

#include <string>
#include <iostream>

class User {
   protected:
    std::string name;

   public:
    void info() const {
        std::cout << name << "\n";
    }

    void setName(std::string newName) {
        this->name = newName;
    }
};
