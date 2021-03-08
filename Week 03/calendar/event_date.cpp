#include "event_date.hpp"

const char* EventDate::getMonth() const {  // Getter
    if (month == 1) {
        return "January";
    } else if (month == 2) {
        return "February";
    } else {  // Feel free to add more hardcoded cases :)
        return "Error";
    }
}

void EventDate::setMonth(int month_) {  // Setter
    // Validate the input
    if (month_ > 12) {
        return;
    }
    if (month_ <= 0) {
        return;
    }

    month = month_;
}
