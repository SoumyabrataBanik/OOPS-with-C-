// Copy Constructor

# include <bits/stdc++.h>

class Player {

    private:
        std::string name;
        int health;
        int xp;
    
    public:

        std::string get_name() { return name; }
        int get_health() { return health; }
        int get_xp() { return xp; }

        Player(std::string name_val="None", int health_val=0, int xp_val=0); // Constructor with default Paramaters

        Player(const Player &source);

        ~Player() { std::cout << "Deconstructor Called for: " << name << std::endl; }; // Deconstructor
};

Player::Player(std::string name_val, int health_val, int xp_val)
    : name{name_val}, health{health_val}, xp{xp_val} {
        std::cout << "Three Arg Constructor Called for: " << name_val << std::endl;
    }

Player::Player(const Player &source)                //Copy Constructor
    : Player {source.name, source.health, source.xp} {          // Constructor Delegation to line 25
        std::cout << "Copy Constructor called for: " << source.name << std::endl;
    }

void display_player(Player p) {
    std::cout << "Name: " << p.get_name() << std::endl;
    std::cout << "Health: " << p.get_health() << std::endl;
    std::cout << "XP: " << p.get_xp() << std::endl;
}

int main() {

    Player empty;
    display_player(empty);
    std::cout << std::endl;

    Player frank {"Frank", 100, 50};
    display_player(frank);

    std::cout << std::endl;
    return 0;
}