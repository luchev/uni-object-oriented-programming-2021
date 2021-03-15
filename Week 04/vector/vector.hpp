#pragma once
class Vector {
    int* data;
    int count = 0;
    int capacity;
    static int constructor_calls;

   public:
    Vector(int _capacity = 4);
    Vector(const Vector& rhs);
    ~Vector();
    Vector& operator=(const Vector& rhs);

    int operator[](int index);

    void push_back(int x);

    static Vector createVector();  // can be used instead of constructor
};
