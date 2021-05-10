#pragma once
#include <string>

#include "RestaurantItem.hpp"

class Food : public RestaurantItem {
   protected:
    std::string name = "";
    double weight = 0;

   public:
    Food(int stock = 0, double price = 0, std::string name = "", double weight = 0);
    std::string getName() const;
    void setName(std::string name);
    void setWeight(double weight);
    bool operator>(const Food& rhs) const;
    void print();
    RestaurantItem* clone() const;
};
