#pragma once
#include <vector>

template <class T>
class Stack : protected std::vector<T> {
   public:
    T pop() {
        T temp = std::vector<T>::at(std::vector<T>::size() - 1);
        std::vector<T>::pop_back();
        return temp;
    }
    void push(const T& element) {
        std::vector<T>::push_back(element);
    }
};
