#pragma once
#include <iostream>

class Person {
    char* firstName = nullptr;
    char* lastName = nullptr;

   public:
    Person(const char* firstName = "", const char* lastName = "");
    Person(const Person& rhs);
    Person& operator=(const Person& rhs);
    ~Person();

    void setFirstName(const char* name);
    void setLastName(const char* name);

    const char* getFirstName() const;
    const char* getLastName() const;

    void writeToFile(const char* path) const;    
};

std::ostream& operator<<(std::ostream& out, const Person& person);
std::istream& operator>>(std::istream& in, Person& person);
