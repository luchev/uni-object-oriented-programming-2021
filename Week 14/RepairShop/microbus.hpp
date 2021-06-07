#pragma once
#include "vehicle.hpp"

class Microbus : public Vehicle {
    bool hasPassengers = false;

   public:
    // constructor with parameters

    bool getHasPassengers() const {
        return hasPassengers;
    }
    
    void setHasPassengers(bool newHasPassengers) {
        hasPassengers = newHasPassengers;
    }

    Vehicle* clone() const {
        return new Microbus(*this);
    }
};
