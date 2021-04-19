#include <iostream>

class Grandparent {
    public:
    std::string name;

    std::string getName() const {
        return this->name;
    }

    void setName(const std::string & newName) {
        this->name = newName;
    }
};

class Parent1 : virtual public Grandparent {
    // more custom stuff
};

class Parent2 : virtual public Grandparent {
    // more custom stuff
};

class Child : public Parent1, public Parent2 {
    // more custom stuff
};

int main() {
    Grandparent g;
    Parent1 p1;
    Parent2 p2;
    Child c;

    g.setName("Grand\n");
    std::cout << g.getName();
    p1.setName("Parent1\n");
    std::cout << p1.getName();
    p2.setName("Parent2\n");
    std::cout << p2.getName();

    c.setName("Child");
    std::cout << c.getName();

    // You don't need virtual inheritance,
    // you can have 2 instances of the base class
    // but then you need to access them with the full
    // path (scope::function) or (scope::field)
    
    // c.Parent1::setName("Child from parent 1\n");
    // std::cout << c.Parent1::getName();

    // c.Parent2::setName("Child from parent 2\n");
    // std::cout << c.Parent2::getName();


}
