#include <iostream>
#include "vector.hpp"

int main() {
    Vector x = Vector::createVector();
    for (int i = 0; i < 10; i++) {
        x.push_back(i);
    }
}
