#include "Food.hpp"
#include "Drink.hpp"
#include "RestaurantItem.hpp"
#include "Restaurant.hpp"

int main() {
    Restaurant restaurant;
    restaurant.add(new Food(30, 5.50, "Pizza", 0.400));
    restaurant.add(new Drink(100, 2.80, "Water", 0));
    restaurant.changePrice(1, 1.80);
}
