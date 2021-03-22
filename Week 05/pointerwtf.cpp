#include <iostream>
#include <iomanip>

int main() {
    int* array = new int[10];
    *array = 42;
    *(array + 5) = 130; // array[5] = 130

    char c = 'c'; // 157   mem[157] = 'c'
    char* ptr1 = &c;
    char** ptr2 = &ptr1;
    char*** ptr3 = &ptr2;

    ***ptr3 = 'P';

    std::cout << ***ptr3;
}
