#include <iostream>
#include <string>

struct StudentScore {
    int fn;
    int task1Points;
    int task2Points;
    std::string name;

    friend std::istream& operator>>(std::istream& in, StudentScore& s);
    friend std::ostream& operator<<(std::ostream& out, const StudentScore& s);
};

std::istream& operator>>(std::istream& in, StudentScore& s) {
    char discard;
    // read this kind of input: 62000,0,2,Ivan
    in >> s.fn >> discard >> s.task1Points >> discard >>
        s.task2Points >> discard >> s.name;

    return in;
}

std::ostream& operator<<(std::ostream& out, const StudentScore& s) {
    out << s.fn << "," << s.task1Points << ","
        << s.task2Points << "," << s.name << "\n";
    return out;
}

int main() {
    StudentScore s;
    while (std::cin >> s) {
        std::cout << "Student: " << s.fn << "\n";
    }
}
