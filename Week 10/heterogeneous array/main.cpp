#include <vector>
#include <iostream>

// Abstract class = class with 1+ pure virtual method
class Assignment {
   public:
   // Pure virtual methods have no implementation
    virtual int getPoints() const = 0;

    // The destructor can be pure virtual and still
    // have an implementation
    virtual ~Assignment() = 0;
};

Assignment::~Assignment() {
    // delete dynamic memory
}

class Homework1 : public Assignment {
    int task1;
   public:
    Homework1(int points) {
        task1 = points;
    }

    int getPoints() const {
        return task1;
    }
};

class Homework2 : public Assignment {
    std::vector<int> points;
   public:
    Homework2(int task1Points, int task2Points) {
        points.push_back(task1Points);
        points.push_back(task2Points);
    }

    int getPoints() const {
        int total = 0;
        for (auto x : points) {
            total += x;
        }
        return total;
    }
};

int main() {
    std::vector<Assignment*> assignments;
    assignments.push_back(new Homework1(1));
    assignments.push_back(new Homework2(4, 2));
    for (auto ptr : assignments) {
        std::cout << ptr->getPoints() << "\n";
    }
    for (auto ptr : assignments) {
        delete ptr; // Use delete[] only for arrays
    }

    // Assignment* * assin = new Assignment*[10];
    // assin[0] = hw1;
    // assin[1] = hw2;
    // delete[] assin;
}
