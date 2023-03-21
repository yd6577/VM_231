#pragma once

class Payment {
public:
    void processPayment(double amount);
    void giveChange(double amount);
    double calculateChange(double payment, double productPrice);
    //add payment class should talk to dispens 

private:
    double balance_;
};

