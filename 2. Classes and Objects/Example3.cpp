// Private and Public Classes

# include <bits/stdc++.h>
# include <string>

using namespace std;

class Player {

    private:
        string name;
        int health;
        int xp;

    public:

        void set_name (string n) { name = n; }
        
        void set_health(int h) {
            if (h > 100) { cout << "Health Cannot be more than 100!" << endl; }
            else { health = h; }
        }

        void set_xp(int x) {
            if (x > 25) { cout << "XP cannot be more than 25!" << endl; }
            else { xp = x; }
        }

        void get_name() { cout << "Player name is: " << name << endl; }
        
        void get_health() { cout << "Player " << name <<"'s health is: " << health << endl; }
        
        void get_xp() { cout << "Player " << name <<"'s xp is: " << xp << endl; }

};

int main () {

    Player frank;
    frank.set_name("Frank");
    frank.set_health(101);
    frank.set_xp(30);

    cout << endl;

    Player ribbery;
    ribbery.set_name("Ribbery");
    ribbery.set_health(95);
    ribbery.set_xp(25);
    ribbery.get_name();
    ribbery.get_health();
    ribbery.get_xp();

    cout << endl;
    return 0;
}