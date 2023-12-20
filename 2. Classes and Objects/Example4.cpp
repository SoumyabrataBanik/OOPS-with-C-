// Constructor and Deconstructor

# include <bits/stdc++.h>
# include <string>

class Account {

    private:
        std::string name;
        double balance;

    public:

        Account() {
            name = "None";
            balance = 0.0;
        }

        Account(std::string name_val, double balance_val) {
            name = name_val;
            balance = balance_val;
        }

        ~Account() {
            name = "None";
            balance = 0.0;
        }

        std::string get_name() {
            return name;
        }

        double get_balance() {
            return balance;
        }

        bool deposit(double amount) {
            balance += amount;
            return true;
        }

        bool withdraw(double amount) {
            if (balance - amount > 0) {
                balance -= amount;
                return true;
            } else {
                return false;
            }
        }
};

int main () {

    {
        Account holder;
        Account holder1 {"Frank", 1000};

        std::cout << "Name of the Account Holder: " << holder1.get_name() << std::endl;
        std::cout << "Balance: " << holder1.get_balance() << std::endl;

        if (holder1.deposit(500)) {
            std::cout << "Deposited $500" << std::endl;
        }

        else {
            std::cout << "Failed to Deposit money!" << std::endl; 
        }

        std::cout << "Updated Balance: " << holder1.get_balance() << std::endl;

        if (holder1.withdraw(2020)) {
            std::cout << "Withdrawn $2020." << std::endl;
        }

        else{
            std::cout << "Failed to Withdraw money. Insufficient Balance!" << std::endl;
        }
    }

    std::cout << std::endl;

    return 0;
}