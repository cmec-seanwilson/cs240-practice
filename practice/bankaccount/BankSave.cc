#include <cstdlib>
#include <iostream>
#include <thread>
#include <functional>
#include "BankSave.h"

double BankSave::getBalance() const {
    return balance;
}

// void BankSave::transfer(double amount, BankSave dest) {
//     if (amount > balance) {
//         std::cout << "Transfer amount is greater than available balance";
//         exit(EXIT_FAILURE);
//     } else {
//         widthdraw(amount);
//         dest.deposit(amount);
//     }
// }

void BankSave::deposit(double amount) {
    balance += amount;
}

void BankSave::widthdraw(double amount) {
    // Check if the balance is greater than the balance of the account
    if (amount > balance) {
        std::cout << "Widthdrawal amount is greater than account balance";
        exit(EXIT_FAILURE);
    } else {
        balance -= amount;
    }
}


