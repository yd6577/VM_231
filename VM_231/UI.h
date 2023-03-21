#pragma once

#include <string>
#include "VendingMachine.h"

class UI {
public:
    void displayWelcomeMessage();
    void displayProducts(VendingMachine& vm);
    void displayErrorMessage(const std::string& message);
    void displayOutOfStockMessage();
    void displayInsufficientFundsMessage();
    void displayPurchaseConfirmation(const std::string& product, double change);
    
};
