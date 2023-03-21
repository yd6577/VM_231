#include "Product.h"

Product::Product(std::string name, double price, int stock)
    : name_(name), price_(price), stock_(stock) {}

std::string Product::getName() const {
    return name_;
}

double Product::getPrice() const {
    return price_;
}

int Product::getStock() const {
    return stock_;
}

void Product::setPrice(double price) {
    price_ = price;
}

void Product::setStock(int stock) {
    stock_ = stock;
}

