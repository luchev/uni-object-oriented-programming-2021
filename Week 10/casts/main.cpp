#include <vector>
#include <iostream>

class Assignment {
   public:
    virtual int getPoints() const = 0;
    virtual ~Assignment() { }
};

class Homework1 : public Assignment {
   public:
    int task1;
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
        Homework1* hw1Maybe = dynamic_cast<Homework1*>(ptr);
        if (hw1Maybe) {
            hw1Maybe->task1 += 1;
        }
    }

    for (auto ptr : assignments) {
        std::cout << ptr->getPoints() << "\n";
    }

    for (auto ptr : assignments) {
        delete ptr;
    }
}
