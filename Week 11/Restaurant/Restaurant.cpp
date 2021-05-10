#pragma once
#include "Restaurant.hpp"

#include <string>
#include <vector>

#include "Drink.hpp"
#include "Food.hpp"
#include "RestaurantItem.hpp"

void Restaurant::add(RestaurantItem* x) {
    items.push_back(x);
}

void Restaurant::remove(size_t index) {
    delete items[index];
    items.erase(items.begin() + index);
}

void Restaurant::changePrice(size_t index, double newPrice) {
    items[index]->setPrice(newPrice);
}

void Restaurant::changeName(size_t index, std::string newName) {
    Food* foodPtr = dynamic_cast<Food*>(items[index]);
    if (foodPtr) {
        foodPtr->setName(newName);
    }

    Drink* drinkPtr = dynamic_cast<Drink*>(items[index]);
    if (drinkPtr) {
        drinkPtr->setName(newName);
    }
}

void Restaurant::print() const {
    for (auto x : items) {
        x->print();
    }
}

void Restaurant::printNonAlcoholic() const {
    for (auto x : items) {
        auto drinkPtr = dynamic_cast<Drink*>(x);
        if (drinkPtr) {
            auto zero = Drink(0, 0, "", 0.001);
            if (zero > *drinkPtr) {
                drinkPtr->print();
            }
        }
    }
}

Restaurant::~Restaurant() {
    for (auto x : items) {
        delete x;
    }
}

Restaurant::Restaurant(const Restaurant& rhs) {
    for (auto x : rhs.items) {
        items.push_back(x->clone());
    }
}

Restaurant& Restaurant::operator=(const Restaurant& rhs) {
    if (this != &rhs) {
        for (auto x : items) {
            delete x;
        }
        items.clear();

        for (auto x : rhs.items) {
            items.push_back(x->clone());
        }
    }
    return *this;
}
