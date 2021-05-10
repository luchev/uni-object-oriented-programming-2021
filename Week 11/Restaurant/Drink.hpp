#pragma once
#include <string>

#include "RestaurantItem.hpp"

class Drink : public RestaurantItem {
   protected:
    std::string name = "";
    double alcohol = 0;

   public:
    Drink(int stock = 0, double price = 0, std::string name = "", double alcohol = 0);
    std::string getName() const;
    void setName(std::string name);
    void setAlcohol(double alcohol);
    bool operator>(const Drink& rhs) const;
    void print();
    RestaurantItem* clone() const;
};
