# include <bits/stdc++.h>
# include <vector>
# include <string>

using namespace std;

class Player {

    public:
        // Attributes
        string name;
        int health;
        int xp;

        // Method 1
        void talk(string text_to_talk) { cout << name << " says " << text_to_talk << endl; }

        // Method 2
        void is_dead(int h) {
            if (h==0) {
                cout << name << " is Dead!" << endl;
            }
            else {
                cout << name << " is not Dead!" << endl;
            }
        }
};

class Account {

    public: 
        // Attributes
        string name;
        double balance;

        // Method 1
        void deposit(double bal) {
            cout << "Amount Deposited: " << bal << endl;
            balance += bal;
        }

        // Method 2
        void withdraw(double bal) {
            cout << "Amount Withdrawn: " << bal << endl;
            balance -= bal;
        }

        // Method 3
        void get_balance() {
            cout << "Mr. " << name << "! Your Balance is " << balance << endl;
        }
};

int main() {

    Player Frank;

    Frank.name = "Frank";
    Frank.health = 100;
    Frank.xp = 20;

    Frank.talk("Hi There!");
    Frank.is_dead(Frank.health);

    cout << endl;

    Player *enemy = new Player; // Creating an empty "Player" object in the heap

    (*enemy).name = "Matthews"; // Using dereferencing to access the Player class and store the value 'name' in the object
    enemy->health = 80; // Using the arrow operator to point to the Player Class
    enemy->xp = 180;

    (*enemy).talk("I will kill you!");
    enemy->is_dead(enemy->health);

    cout << endl;

    Account Soumya;

    Soumya.name = "Soumyabrata";
    Soumya.balance = 5706.6;
    Soumya.deposit(459.99);
    Soumya.get_balance();
    Soumya.withdraw(500.798);
    Soumya.get_balance();

    
    cout << endl;
    return 0;
}