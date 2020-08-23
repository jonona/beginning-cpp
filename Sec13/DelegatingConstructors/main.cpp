#include <iostream>
#include <string>
//#include <vector>

using namespace std;

class Player{
private:
    string name;
    int health;
    int xp;
public:
    Player();
    Player(string name_val);
    Player(string name_val, int health_val, int xp_val);
};

Player::Player()
//    :name{"None"}, health{0}, xp{0}{
    :Player{"None",0,0}{ //calling delegating constructor
        cout << "No-args constructor" << endl;
    }

Player::Player(string name_val)
//    :name{name_val}, health{0}, xp{0}{
    :Player{name_val,0,0}{
        cout << "One-args constructor" << endl;
    }

Player::Player(string name_val, int health_val, int xp_val) //delegating constructor
    :name{name_val}, health{health_val}, xp{xp_val}{
        cout << "Three-args constructor" << endl;
    }

int main()
{
    Player empty;
    Player frank {"Frank"};
    Player villain {"Villain", 100, 55};
    
	cout <<  endl;
	return 0;
}
