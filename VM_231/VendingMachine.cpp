#include "VendingMachine.h"

VendingMachine::VendingMachine() {
    productPrices_ = std::map<std::string, double>();
    productStocks_ = std::map<std::string, int>();
}

void VendingMachine::setProductPrice(std::string productName, double price) {
    productPrices_[productName] = price;
    productStocks_[productName] = 0;
}

void VendingMachine::addProduct(std::string productName) {
    productStocks_[productName]++;
}

bool VendingMachine::dispense(std::string productName, double payment) {
    if (!isOutOfStock(productName) && payment >= productPrices_[productName]) {
        if (payment > productPrices_[productName]) {
            double change = calculateChange(payment, productPrices_[productName]);
            payment_.giveChange(change);
        }
        productStocks_[productName]--;
        dispensing_.dispenseProduct(productName);
        payment_.processPayment(payment);
        return true;
    }
    return false;
}

std::map<std::string, double> VendingMachine::getProductPrices() {
    return productPrices_;
}

bool VendingMachine::isOutOfStock(std::string productName) {
    return productStocks_[productName] <= 0;
}

double VendingMachine::calculateChange(double payment, double productPrice) {
    return payment - productPrice;
}
