#include "Person.hpp"
#include <cstring>
#include <fstream>

Person::Person(const char* firstName, const char* lastName) {
    setFirstName(firstName);
    setLastName(lastName);
}

Person::Person(const Person& rhs) {
    setFirstName(rhs.firstName);
    setLastName(rhs.lastName);
}

Person& Person::operator=(const Person& rhs) {
    if (this != &rhs) {
        setFirstName(rhs.firstName);
        setLastName(rhs.lastName);
    }
    return *this;
}

Person::~Person() {
    delete[] firstName;
    delete[] lastName;
}

void Person::setFirstName(const char* name) {
    if (firstName != name) {
        delete[] firstName;
        firstName = new char[strlen(name) + 1];
        strcpy(firstName, name);
    }
}

void Person::setLastName(const char* name) {
    if (lastName != name) {
        delete[] lastName;
        lastName = new char[strlen(name) + 1];
        strcpy(lastName, name);
    }
}

const char* Person::getFirstName() const {
    return firstName;
}

const char* Person::getLastName() const {
    return lastName;
}

void Person::writeToFile(const char* path) const {
    std::ofstream file(path);
    if (file.is_open()) {
        file << *this;
    }
}

std::ostream& operator<<(std::ostream& out, const Person& person) {
    out << person.getFirstName() << " " << person.getLastName();
    return out;
}

std::istream& operator>>(std::istream& in, Person& person) {
    char buffer[100];
    in >> buffer;
    person.setFirstName(buffer);
    in >> buffer;
    person.setLastName(buffer);
    return in;
}
