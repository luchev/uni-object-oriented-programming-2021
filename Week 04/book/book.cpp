#include <cstring>
#include "book.hpp"

Book::Book(const char* name, int pages) : pages(pages) {
    set_name(name);
}

Book::Book(const Book& other) {
    set_name(other.name);
    pages = other.pages;
}

Book& Book::operator=(const Book& other) {
    if (this != &other) {
        set_name(other.name);
        pages = other.pages;
    }

    return *this;
}

Book::~Book() {
    delete[] name;
}

const char* Book::get_name() const {
    return name;
}

void Book::set_name(const char* name) {
    delete[] this->name;
    int size = strlen(name) + 1;
    this->name = new char[size];
    strcpy(this->name, name);
}
