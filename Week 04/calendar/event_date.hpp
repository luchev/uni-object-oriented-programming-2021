#pragma once

class EventDate {
    int month;
    int day;
    int hours;
    int minutes;

   public:
    const char* getMonth() const;
    void setMonth(int month_);

    EventDate(int month = 5) {
        this->month = month;
        day = 0;
        hours = 0;
        minutes = 0;
    }

    EventDate& operator++() {
        day++;
        return *this;
    }

    EventDate& operator++(int) {
        EventDate copy(*this);
        day++;
        return copy;
    }

    void operator+=(int days) {
        this->day += days;
    }

    // if this < rhs
    bool operator<(EventDate& rhs) {
        return this->month < rhs.month || 
                (this->month == rhs.month && this->day < rhs.day);
    }
};

bool operator>(EventDate& a, EventDate& b) {
    return b < a;
}
