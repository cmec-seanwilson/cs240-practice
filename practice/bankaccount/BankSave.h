#ifndef BANKSAVE_H 
#define BANKSAVE_H

class BankSave {
    private:
        double balance;
    public:
        void setBalance(double bal) {
            balance = bal;
        };
        double getBalance() const;
        /**
        * Attempted to make a transfer function, however, I ran into an issue that caused a race condition.
        * With my test in main.cpp, After running sean.transfer(100, darren), my code printed out:
        * Sean's Balance: 0
        * Darren's Balance: 0
        * 
        * When the expected result should be:
        * Sean's Balance: 0
        * Darren's Balance: 1
        * 
        * During debugging, the execution suggested that widthdraw was being run correctly,
        * however, the call to the dest account deposit happened after the print statement in the test
        */
        // void transfer(double amount, BankSave dest);
        void deposit(double amount);
        void widthdraw(double amount);

        BankSave(double init_bal) {
            balance = init_bal;
        }
};

#endif