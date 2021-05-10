#include "Food.hpp"
#include <iostream>

Food::Food(int stock, double price, std::string name, double weight)
    : RestaurantItem(ProductType::Food, stock, price), name(name), weight(weight) {
}

std::string Food::getName() const {
    return name;
}

void Food::setName(std::string newName) {
    name = newName;
}

void Food::setWeight(double newWeight) {
    if (newWeight >= 0) {
        weight = newWeight;
    }
}

bool Food::operator>(const Food& rhs) const {
    return weight > rhs.weight;
}

void Food::print() {
    std::cout << stock << " " << price << " " << name << " " << weight << std::endl;
}

RestaurantItem* Food::clone() const {
    return new Food(*this);
}
