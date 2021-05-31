#pragma once
#include <exception>
#include <iostream>

template <class T>
class ProtectedValue {
   private:
    T value;
    size_t code;

   public:
    ProtectedValue(const T& value = T(), size_t code = 0)
        : code(code), value(value) {}

    T get_value(size_t code) const {
        if (this->code == code) {
            return value;
        }
        return T();
        // throw std::invalid_argument("useful text");
    }
};
