#include <iostream>
#include <string>

int main() {
    std::string hello("Hello world");
    hello.append(" and Kenobi");
    hello.push_back('!');

    std::cout << hello << "\n";
    
    std::string hello2 = hello;
    hello.clear();

    size_t position = hello2.find("world");
    std::string::npos;  // 18446744073709551615

    std::cout << hello2;
    hello2 += "!!!";

    if (hello == hello2) {
        std::cout << "The two strings are equal";
    }
}
