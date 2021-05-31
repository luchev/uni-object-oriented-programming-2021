#pragma once
#include <string>
#include <iostream>

class File {
    // fields are public because there is
    // no validation logic
    // and it makes sense
   public:
    std::string name = "";
    std::string extension = "";
    size_t size = 0;

    virtual void prit_debug_state() const {
        std::cout << name << "." << extension << ", size: " << size;
    }

    virtual File* clone() const = 0;
};
