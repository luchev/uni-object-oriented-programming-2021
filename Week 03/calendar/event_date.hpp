#pragma once

class EventDate {
    int month;
    int day;
    int hours;
    int minutes;

   public:
    const char* getMonth() const;
    void setMonth(int month_);
};
