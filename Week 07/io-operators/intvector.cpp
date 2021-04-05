#include <iostream>
#include <vector>

class IntVector {
    std::vector<int> data;
public:
    friend std::istream& operator>>(std::istream& in, IntVector& vec);
    friend std::ostream& operator<<(std::ostream& out, const IntVector& vec);
};

std::istream& operator>>(std::istream & in, IntVector& vec) {
    int input;
    in >> input;
    vec.data.push_back(input);
    return in;
}

std::ostream& operator<<(std::ostream& out, const IntVector& vec) {
    for (auto x : vec.data) {
        out << x << ",";
    }

    return out;
}

int main() {
    IntVector vec;
    for (int i = 0; i < 5; i++) {
        std::cin >> vec;
    }

    std::cout << vec;
}
