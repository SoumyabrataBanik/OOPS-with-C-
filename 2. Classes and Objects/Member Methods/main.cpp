# include <bits/stdc++.h>
# include <string>
# include "Account.h"

using namespace std;

int main() {

    Account frank;

    frank.set_name("Frank's Account");
    frank.set_balance(1000);

    frank.get_name();
    frank.get_balance();
    cout << endl;

    if (frank.deposit(500)) {
        cout << "Deposited $500 into Frank's account." << endl;
    }else {
        cout << "Failed to deposit money into Frank's account." << endl;
    }

    frank.get_balance();
    cout << endl;

    if (frank.withdraw(600)) {
        cout << "Withdrew $600 from Frank's Account." << endl;
    } else {
        cout << "Failed to withdraw money from Frank's Account! Balance insufficient!" << endl;
    }
    
    frank.get_balance();
    cout << endl;
    
    if (frank.withdraw(1000)) {
        cout << "Withdrew $1000 from Frank's Account." << endl;
    } else {
        cout << "Failed to withdraw money from Frank's Account! Balance insufficient!" << endl;
    }

    frank.get_balance();
    cout << endl;

    cout << endl;
    return 0;
}