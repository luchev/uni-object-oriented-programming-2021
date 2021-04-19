#include <iostream>

class Parent {
   public:
    virtual void print() {
        std::cout << "Parent\n";
    }

    virtual ~Parent() {}
};

class Child : public Parent {
   public:
    std::string name = "Josh";

    void print() override {
        std::cout << "Child";
        printName();
    }

    void printName() {
        std::cout << " with name " << this->name << "\n";
    }
};

int main() {
    Parent * p = new Parent();
    p->print();

    Parent * c = new Child();
    c->print();

    delete p;
    delete c;
}
