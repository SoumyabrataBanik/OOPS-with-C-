#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
# include <string>

using namespace std;

class Account {

    private:
        string name;
        double balance;

    public:

        void set_name(string name);
        void get_name();

        void set_balance(double bal);
        void get_balance();

        bool deposit(double bal);
        bool withdraw(double bal);
};

#endif // _ACCOUNT_H_