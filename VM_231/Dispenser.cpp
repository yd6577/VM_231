#include "Dispenser.h"
#include <iostream>

Dispenser::Dispenser(int numProducts) : numProducts_(numProducts), productNames_(new std::string[numProducts_]),
productPrices_(new double[numProducts_]), productStocks_(new int[numProducts_])
{
    // Initialize all product stocks to 0
    for (int i = 0; i < numProducts_; i++) {
        productStocks_[i] = 0;
    }
}

void Dispenser::dispenseProduct(std::string productName) {
    std::cout << "Dispensing " << productName << "...\n";
    // Implementation details
}

void Dispenser::addProduct(std::string productName) {
    // Find the index of the product in the array
    int index = -1;
    for (int i = 0; i < numProducts_; i++) {
        if (productName == productNames_[i]) {
            index = i;
            break;
        }
    }

    if (index != -1) {
        productStocks_[index]++;
    }
}

bool Dispenser::dispense(std::string productName, double payment) {
    // Find the index of the product in the array
    int index = -1;
    for (int i = 0; i < numProducts_; i++) {
        if (productName == productNames_[i]) {
            index = i;
            break;
        }
    }

    // If the product was found and there is stock available
    if (index != -1 && productStocks_[index] > 0) {
        double productPrice = productPrices_[index];
        int productStock = productStocks_[index];

        // If the payment is sufficient
        if (payment >= productPrice) {
            // Calculate the change and dispense the product
            double change = payment - productPrice;
            dispenseProduct(productName);

            // Update the product stock and return true
            productStocks_[index]--;
            return true;
        }
    }

    return false;
}

bool Dispenser::isOutOfStock(std::string productName) {
    // Find the index of the product in the array
    int index = -1;
    for (int i = 0; i < numProducts_; i++) {
        if (productName == productNames_[i]) {
            index = i;
            break;
        }
    }

    // If the product was found and there is no stock available
    if (index != -1 && productStocks_[index] == 0) {
        return true;
    }

    return false;
}
