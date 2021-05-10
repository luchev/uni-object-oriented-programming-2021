#pragma once
#include <string>
#include <vector>

#include "Drink.hpp"
#include "Food.hpp"
#include "RestaurantItem.hpp"

class Restaurant {
   private:
    std::vector<RestaurantItem*> items;

   public:
    Restaurant() = default;
    ~Restaurant();
    Restaurant(const Restaurant&);
    Restaurant& operator=(const Restaurant&);

    void add(RestaurantItem*);
    void remove(size_t);
    void changePrice(size_t, double);
    void changeName(size_t, std::string);
    void print() const;
    void printNonAlcoholic() const;
};
