# include <bits/stdc++.h>
# include <string>
# include "Account.h"

using namespace std;

void Account::set_name(string n) {
    name = n;
}

void Account::get_name() {
    cout << "Name of Account Holder: " << name << endl;
}

void Account::set_balance(double bal) {
    balance = bal;
}

void Account::get_balance() {
    cout << "Balance in the account is: $" << balance << endl;
}

bool Account::deposit(double bal) {
    balance += bal;
    return true;
}

bool Account::withdraw(double bal) {
    if (balance - bal > 0) {
        balance -= bal;
        return true;
    }
    else { return false; }
}