#pragma once
#include "event_date.hpp"

class Event {
   public:
    EventDate date;

   private:
    char* name;  // No way to use this, but we'll fix that soon
};
