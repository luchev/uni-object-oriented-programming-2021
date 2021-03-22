#include <vector>
#include <iostream>

int main() {
    std::vector<int> ints;
    for (int i = 0; i < 100; i++) {
        ints.push_back(0);
    }

    for (size_t i = 0; i < ints.size(); i++) {
        std::cout << ints[i] << " ";
    }

    for (std::vector<int>::iterator it = ints.begin(); it != ints.end(); it++) {
        std::cout << *it << " ";
    }

    for (auto it = ints.begin(); it != ints.end(); it++) {
        std::cout << *it << " ";
    }

    for (auto x : ints) {
        std::cout << x << " ";
    }

    ints[5] = 42;
    int index5Val = ints.at(5);
    ints.pop_back();

    ints.size(); // 100
    if (ints.empty()) {
        std::cout << "Vec is empty";
    }

    std::vector<int>::iterator index5 = ints.begin() + 5;
    *index5 = 422;
    ints.insert(index5, 7); // != ints[5] = 7
    ints.erase(index5);

    ints.clear();
}
