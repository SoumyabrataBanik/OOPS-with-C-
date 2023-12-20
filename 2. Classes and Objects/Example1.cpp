# include <bits/stdc++.h>
# include <vector>
# include <string>

using namespace std;

class Player {
    string name;
    int health;
    int xp;

    void talk(string);
    bool is_dead();
};

int main() {
    Player Frank;
    Player Hero;

    Player players[] {Frank, Hero};

    vector<Player> players_vector;
    players_vector.push_back(Frank);
    players_vector.push_back(Hero);

    Player *enemy {nullptr};
    enemy = new Player;

    delete enemy;
    
    return 0;
}