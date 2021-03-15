#include <iostream>

#include "event.hpp"
#include "event_date.hpp"

int main() {
    Event event1;
    event1.date.setMonth(42);  // Does nothing
    event1.date.setMonth(5);  // Success
    event1.date++;
    event1.date += 5;
}
