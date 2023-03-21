#pragma once
#include <string>

class Dispenser {
public:
    Dispenser(int numProducts);
    void addProduct(std::string productName);
    void dispenseProduct(std::string productName);
   // bool dispense(std::string productName, double payment);
    bool isOutOfStock(std::string productName);

private:
    int numProducts_;
    std::string* productNames_;
    double* productPrices_;
    int* productStocks_;
};
