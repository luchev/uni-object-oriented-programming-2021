#include <iostream>
#include "vector.hpp"

int main() {
    Vector x = Vector::createVector();
    for (int i = 0; i < 10; i++) {
        x.push_back(i);
    }

    Vector y(42);
    y.push_back(4);
    int x = y[1];    
}
