#pragma once
#include <vector>

class String : public std::vector<char> {
   public:
    String() {
        push_back('\0');
    }

    void push_back(char c) {
        if (!this->empty()) {
            pop_back();
        }
        std::vector<char>::push_back(c);
        std::vector<char>::push_back('\0');
    }

    const char* c_str() const {
        return &at(0);
    }
};
