#include <iostream>

class EventDate {  // if everything is public: class === struct { .. }
// private: // Not needed, because it's private by default
    int month;
    int day;
    int hours;
    int minutes;

   public:
    // It's bad practice to return a static string, but we'll fix that later
    const char* getMonth() const { // Getter
        if (month == 1) {
            return "January";
        } else if (month == 2) {
            return "February";
        } else {  // Feel free to add more hardcoded cases :)
            return "Error";
        }
    }

    void setMonth(int month_) { // Setter
        // Validate the input
        if (month_ > 12) {
            return;
        }
        if (month_ <= 0) {
            return;
        }

        month = month_;
    }
};

class Event {
   public:
    EventDate date;

   private:
    char* name;  // No way to use this, but we'll fix that soon
};

int main() {
    Event event1;
    event1.date.setMonth(42);  // Does nothing
    event1.date.setMonth(5);  // Success
}
