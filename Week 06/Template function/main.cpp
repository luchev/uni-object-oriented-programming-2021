#include <Max.hpp>
#include <iostream>
#include <vector>

int main() {
    std::vector<int> vecInts;
    vecInts.push_back(5);
    vecInts.push_back(2);
    vecInts.push_back(7);
    vecInts.push_back(1);

    if (vecInts.empty()) {
        std::cout << "No max\n";
    } else {
        int maxEl = -1;
        for (auto x : vecInts) {
            maxEl = max(maxEl, x);
        }
        std::cout << "Max int element: " << maxEl << "\n";
    }

    std::vector<double> vecDoubles;
    vecDoubles.push_back(5.7);
    vecDoubles.push_back(2.2);
    vecDoubles.push_back(7.8);
    vecDoubles.push_back(1.1);

    if (vecInts.empty()) {
        std::cout << "No max\n";
    } else {
        double maxEl = -1;
        for (auto x : vecDoubles) {
            maxEl = max(maxEl, x);
        }
        std::cout << "Max double element: " << maxEl << "\n";
    }
}
