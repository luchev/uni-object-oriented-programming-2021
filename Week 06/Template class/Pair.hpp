#pragma once
#include <iostream>

template <class KEY, class VALUE>
class Pair {
   public:
    KEY key;
    VALUE value;

    KEY getKey() const {
        return key;
    }
    VALUE getValue() const {
        return value;
    }
    void setKey(KEY newKey) {
        key = newKey;
    }
    void setValue(VALUE newValue);
};

// define method outside
template <class KEY, class VALUE>
void Pair<KEY, VALUE>::setValue(VALUE newValue) {
    value = newValue;
}

// template specialization
template<>
void Pair<int, bool>::setValue(bool newValue) {
    std::cout << "hello from int bool";
    value = newValue;
}
