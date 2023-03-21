#pragma once

#include <string>

class Product {
public:
    Product(std::string name, double price, int stock);

    std::string getName() const;
    double getPrice() const;
    int getStock() const;
    void setPrice(double price);
    void setStock(int stock);


private:
    std::string name_;
    double price_;
    int stock_;
};

