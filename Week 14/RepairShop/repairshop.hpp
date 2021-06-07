#pragma once
#include <vector>

#include "vehicle.hpp"

class RepairShop {
    std::vector<Vehicle*> vehicles;
    const size_t MAX_CAPACITY = 10;

    size_t calcCapacity() const {
        size_t cap;
        for (auto x : vehicles) {
            cap += (size_t)x->getSeverity();
        }
        return cap;
    }

    void clear() {
        for (auto x : vehicles) {
            delete x;
        }
        vehicles = std::vector<Vehicle*>();
    }

    void copy(const RepairShop& rhs) {
        for (auto x : rhs.vehicles) {
            vehicles.push_back(x->clone());
        }
    }

   public:
    RepairShop() = default;

    RepairShop(const RepairShop& rhs) {
        copy(rhs);
    }

    RepairShop& operator=(const RepairShop& rhs) {
        if (this != &rhs) {
            clear();
            copy(rhs);
        }
        return *this;
    }

    ~RepairShop() {
        clear();
    }

    void add(Vehicle* v) {
        vehicles.push_back(v->clone());
    }

    bool hasCapacity(Vehicle* v) const {
        return calcCapacity() + (size_t)v->getSeverity() <= MAX_CAPACITY;
    }
};
