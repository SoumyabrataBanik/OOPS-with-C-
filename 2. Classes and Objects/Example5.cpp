// Constructor Initialization List

# include <bits/stdc++.h>
# include <string>

class Account {

    private:
        std::string name;
        double balance;
    
    public:
        Account ();
        Account (std::string name_val);
        Account (std::string name_val, double amount);
};

Account::Account()
    : name{"NONE"}, balance{0} {}

Account::Account(std::string name_val)
    :name{name_val}, balance{0} {}

Account::Account(std::string name_val, double amount)
    :name{name_val}, balance{amount} {}


int main () {

    Account empty;
    Account holder1("Frank");
    Account holder2("Matthews", 1000);

    return 0;
}