# include <bits/stdc++.h>
# include <vector>
using namespace std;

int main() {

    int input;

    cout << "Enter the amount in cents: ";
    cin >> input;
    cout << endl;

    int dollars = input / 100;
    int quarters = (input - dollars*100) / 25;
    int dimes = (input - dollars*100 - quarters*25) / 10;
    int nickels = (input - dollars*100 - quarters*25 - dimes*10) / 5;
    int penny = (input - dollars*100 - quarters*25 - dimes*10 - nickels*5);

    cout << "You can provide this change as follows: " << endl;
    cout << "Dollars : " << dollars << endl;
    cout << "Quarters : " << quarters << endl;
    cout << "Dimes : " << dimes << endl;
    cout << "Nickels : " << nickels << endl;
    cout << "Pennies : " << penny << endl;
}