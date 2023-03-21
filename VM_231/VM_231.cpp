#include <iostream>
#include "VendingMachine.h"

int main() {
    // Create a vending machine object
    VendingMachine vendingMachine;

    // Set the price of products
    vendingMachine.setProductPrice("Cola", 1.5);
    vendingMachine.setProductPrice("Chips", 0.75);
    vendingMachine.setProductPrice("Candy", 0.5);

    // Add some products to the vending machine
    vendingMachine.addProduct("Cola");
    vendingMachine.addProduct("Cola");
    vendingMachine.addProduct("Cola");
    vendingMachine.addProduct("Chips");
    vendingMachine.addProduct("Candy");

    // Display the prices of products
    std::cout << "Product prices:\n";
    std::map<std::string, double> productPrices = vendingMachine.getProductPrices();
    for (auto it = productPrices.begin(); it != productPrices.end(); ++it) {
        std::cout << it->first << " - $" << it->second << "\n";
    }

    // Allow the user to select a product and make payment
    std::string selectedProduct;
    double paymentAmount;
    std::cout << "\nEnter the name of the product you want to buy: ";
    std::cin >> selectedProduct;
    std::cout << "Enter your payment amount: $";
    std::cin >> paymentAmount;

    // Dispense the product and provide change
    bool dispensed = vendingMachine.dispense(selectedProduct, paymentAmount);
    if (dispensed) {
        std::cout << "Here's your " << selectedProduct << ". Thank you for your purchase!\n";
    }
    else {
        std::cout << "Sorry, we are out of " << selectedProduct << " or you have not provided enough payment.\n";
    }

    return 0;
}
