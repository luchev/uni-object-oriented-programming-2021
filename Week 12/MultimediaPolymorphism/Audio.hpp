#pragma once
#include "File.hpp"
#include <string>
#include <iostream>

class Audio : public File {
   public:
    size_t length = 0;
    std::string singer = "";

    File* clone() const override {
        return new Audio(*this);
    }
};
