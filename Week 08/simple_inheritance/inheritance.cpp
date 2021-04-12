#include <iostream>
#include <string>
#include "User.hpp"
#include "Student.hpp"
#include "Lecturer.hpp"

int main() {
    User user;
    user.setName("User 1");
    user.info();

    Student student;
    student.fn = 60000;
    student.setName("Student 1");
    student.info();

    Lecturer lecturer;
    lecturer.setName("Gx");
    lecturer.title = "Dr.";
    lecturer.info();
}
