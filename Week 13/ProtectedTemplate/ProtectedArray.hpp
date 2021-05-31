#pragma once
#include <exception>
#include <iostream>
#include "ProtectedValue.hpp"

template <class T>
class ProtectedArray {
   private:
    ProtectedValue<T>* data = nullptr;
    size_t size = 0;

    void justCopy(const ProtectedArray& rhs) {
        size = rhs.size;
        data = new ProtectedValue<T>[size];
        for (size_t i = 0; i < rhs.size; i++) {
            data[i] = rhs.data[i];
        }
    }

    void justClean() {
        delete[] data;
        data = nullptr;
        size = 0;
    }

   public:
    ProtectedArray() {}

    ProtectedArray(const ProtectedArray& rhs) {
        justCopy(rhs);
    }

    ProtectedArray& operator=(const ProtectedArray& rhs) {
        if (this != &rhs) {
            justClean();
            justCopy(rhs);
        }
        return *this;
    }

    ~ProtectedArray() {
        justClean();
    }

    void add(const T& value, size_t code) {                         // value = 4
        ProtectedValue<T>* copy = new ProtectedValue<T>[size + 1];  // data [ 1 2 3 ]
        for (size_t i = 0; i < size; i++) {                         // copy [ 1 2 3 x ]
            copy[i] = data[i];
        }
        copy[size] = ProtectedValue(value, code);  // copy [ 1 2 3 4 ]

        delete[] data;
        data = copy;  // data [ 1 2 3 4 ]
        size += 1;
    }

    T get_value(size_t code, size_t index) const {
        if (index < size) {
            return data[index].get_value(code);
        } else {
            return T();
        }
    }
};
