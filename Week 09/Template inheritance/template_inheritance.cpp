#include <iostream>
#include <vector>
#include "string_using_vector.hpp"
#include "stack_using_vector.hpp"

int main() {
    String s;
    s.push_back('s');
    s.push_back('s');
    s.push_back('s');

    std::cout << s.c_str();

    Stack<int> stak;
    stak.push(2);
    stak.pop();
}
