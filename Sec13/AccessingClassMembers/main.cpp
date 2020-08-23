#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Player{
public:
    // attributes
    string name {"Player"};
    int health {100};
    int xp {3};
    
    // methods
    void talk(string text) { cout << name << " says: " << text << endl;};
    bool is_dead();
};

class Account {
public:
    // attributes
    string name {"Account"};
    double balance {0.0};
    
    // methods
    bool deposit(double bal) { balance += bal; cout << "In deposit" << endl; };
    bool withdraw(double bal) { balance -= bal; cout << "In withdraw" << endl; };
};


int main()
{
    Player frank;
    frank.name = "Frank";
    frank.health = 100;
    frank.xp = 10;
    frank.talk("Hi there");
    
    Player *enemy = new Player;
    (*enemy).name = "Enemy";
    (*enemy).health = 50;
    enemy -> xp = 15;
    enemy -> talk("I will destroy you!");
    
    cout << "\n--------------------------------------" << endl;
    
    Account frank_account;
    frank_account.name = "Frank's";
    frank_account.balance = 5000.0;
    frank_account.deposit(1000);
    frank_account.withdraw(300);
    
    Account *mary_account = new Account;
    (*mary_account).name = "Mary's";
    mary_account -> balance = 400;
    mary_account -> withdraw(23);
    
	cout <<  endl;
	return 0;
}
