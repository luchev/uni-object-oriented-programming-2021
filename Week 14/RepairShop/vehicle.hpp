#pragma once
#include <string>

enum class Severity {
    LOW = 1,
    MEDIUM = 3,
    HIGH = 5,
};

// Split in hpp/cpp
class Vehicle {
    std::string mark;
    std::string model;
    size_t year;
    std::string problemDescription;
    Severity problemSeverity;
public:

    // getters/setters
    // constructor with parameters
    virtual Vehicle* clone() const = 0;
    virtual ~Vehicle() = default;

    Severity getSeverity() const {
        return problemSeverity;
    }
};
