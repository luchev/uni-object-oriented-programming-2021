#include "RestaurantItem.hpp"

RestaurantItem::RestaurantItem(ProductType type, int stock, double price)
    : type(type), stock(stock), price(price) {}

ProductType RestaurantItem::getType() const {
    return type;
}

int RestaurantItem::getStock() const {
    return stock;
}

double RestaurantItem::getPrice() const {
    return price;
}

void RestaurantItem::setStock(int newStock) {
    if (newStock >= 0) {
        stock = newStock;
    }
}

void RestaurantItem::setPrice(double newPrice) {
    if (newPrice >= 0) {
        price = newPrice;
    }
}
