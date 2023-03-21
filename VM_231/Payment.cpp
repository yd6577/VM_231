#include "Payment.h"

void Payment::processPayment(double amount) {
    balance_ += amount;
}

void Payment::giveChange(double amount) {
    balance_ -= amount;
}
