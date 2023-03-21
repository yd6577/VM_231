#include "UI.h"
#include <iostream>

void UI::displayWelcomeMessage() {
    std::cout << "Welcome to the Vending Machine!" << std::endl;
}

void UI::displayProducts(VendingMachine& vm) {
    std::cout << "Available products:" << std::endl;

    const std::map<std::string, double>& productPrices = vm.getProductPrices();

    int i = 1;
    for (const auto& product : productPrices) {
        std::cout << i << ". " << product.first << " - $" << product.second << std::endl;
        i++;
    }
}

void UI::displayErrorMessage(const std::string& message) {
    std::cout << "Error: " << message << std::endl;
}

void UI::displayOutOfStockMessage() {
    std::cout << "Error: selected product is out of stock" << std::endl;
}

void UI::displayInsufficientFundsMessage() {
    std::cout << "Error: insufficient funds" << std::endl;
}

void UI::displayPurchaseConfirmation(const std::string& product, double change) {
    std::cout << "Thank you for your purchase of " << product << std::endl;
    std::cout << "Your change is $" << change << std::endl;
}

void UI::displayFarewellMessage() {
    std::cout << "Thank you for using the Vending Machine!" << std::endl;
}
