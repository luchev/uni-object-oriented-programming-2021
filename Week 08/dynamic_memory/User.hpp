#pragma once
#include <cstring>
#include <iostream>

class User {
   protected:
    char* name = nullptr;

   public:
    User(const char* newName = "") {
        std::cout << "Construct User\n";
        setName(newName);
    }

    ~User() {
        std::cout << "Destruct User\n";
        delete[] this->name;
    }

    User(const User& rhs) {
        setName(rhs.name);
    }

    User& operator=(const User& rhs) {
        if (this != &rhs) {
            setName(rhs.name);
        }
        return *this;
    }

    void setName(const char* newName) {
        delete[] this->name;
        this->name = new char[strlen(newName) + 1];
        strcpy(this->name, newName);
    }

    const char* getName() const {
        return this->name;
    }
};
