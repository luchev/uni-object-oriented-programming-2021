// tova e avtomobil
#pragma once
#include "vehicle.hpp"

class Car : public Vehicle {
    bool isPersonal = false;

   public:
    // constructor with parameters

    bool getIsPersonal() const {
        return isPersonal;
    }

    bool getIsCompanyOwned() const {
        return !isPersonal;
    }

    void setHasPassengers(bool newIsPersonal) {
        isPersonal = newIsPersonal;
    }

    Vehicle* clone() const {
        return new Car(*this);
    }
};
