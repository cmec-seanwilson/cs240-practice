#include <iostream>
#include <functional>
#include <thread>
#include "BankSave.h"

int main() {
    BankSave sean(100.00);
    BankSave darren(0.0);
    
    std::cout << "Sean's Balance: " << sean.getBalance() << std::endl;
    std::cout << "Darren's Balance: " << darren.getBalance() << std::endl;

    std::cout << "Transfering $100.00 from Sean's account to Darren's" << std::endl;
    
    sean.widthdraw(100);
    darren.deposit(100);

    std::cout << "Sean's Balance: " << sean.getBalance() << std::endl;
    std::cout << "Darren's Balance: " << darren.getBalance() << std::endl;
} 