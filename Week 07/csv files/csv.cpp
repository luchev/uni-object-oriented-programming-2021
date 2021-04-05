#include <fstream>
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
    std::ifstream inFile("scores.csv");
    std::ofstream outFile("fns", std::ios::app);

    std::string input;

    if (inFile.is_open() && outFile.is_open()) {
        while (inFile >> s) {
            outFile << s.fn << "\n";
            // outFile.flush();
        }
    }

    outFile.close();

    std::ifstream inFn("fns");
    int fn;
    while (inFn >> fn) {
        std::cout << fn << "\n";
    }

    // bad :(
    std::fstream ioFile("io", std::ios::app | std::ios::binary | std::ios::out | std::ios::in);
    ioFile.seekp(5, std::ios::cur);
    ioFile.seekg(0, std::ios::end);
    ioFile.seekg(15, std::ios::beg);
}
