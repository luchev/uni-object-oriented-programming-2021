#pragma once

class Book {
    char* name = nullptr;
    
public:
    int pages = 0;

    Book(const char* name = "", int pages = 0);
    
    // If dynamic memory
    Book(const Book & other);
    Book& operator=(const Book & other);
    ~Book();


    const char* get_name() const;
    void set_name(const char * name);
};
