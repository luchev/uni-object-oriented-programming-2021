#include "Drink.hpp"
#include <iostream>

Drink::Drink(int stock, double price, std::string name, double alcohol)
    : RestaurantItem(ProductType::Drink, stock, price), name(name), alcohol(alcohol) {
}

std::string Drink::getName() const {
    return name;
}

void Drink::setName(std::string newName) {
    name = newName;
}

void Drink::setAlcohol(double newAlcohol) {
    if (newAlcohol >= 0) {
        alcohol = newAlcohol;
    }
}

bool Drink::operator>(const Drink& rhs) const {
    return alcohol > rhs.alcohol;
}

void Drink::print() {
    std::cout << stock << " " << price << " " << name << " " << alcohol << std::endl;
}

RestaurantItem* Drink::clone() const {
    return new Drink(*this);
}
