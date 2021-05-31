#pragma once
#include "File.hpp"
#include <string>

class Stream : protected File {
   public:
    std::string source = "";

    File* clone() const override {
        return new Stream(*this);
    }
};
