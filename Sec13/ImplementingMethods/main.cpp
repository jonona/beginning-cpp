#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Inside the class declaration

class Account {
private:
    string name;
    double balance;
    
public:
    // Inside the class declaration
    void set_balance(double bal){
        balance = bal;
    };
    double get_balance(){
        return balance;
    };
    // Outside the class declaration
    void set_name(string n);
    string get_name();
    
    bool deposit(double amount);
    bool withdraw(double amount);
};


void Account::set_name(string n){
    name = n;
}
string Account::get_name(){
    return name;
}
bool Account::deposit(double amount){
    // if verify amount
    balance += amount;
    return true;
}
bool Account::withdraw(double amount){
    // if verify amount
    if (balance-amount >=0){
        balance -= amount;
        return true;
    } else {
        return false
    }
    
}


int main()
{
    Account frank_account;
    frank_account.set_name("Frank's");
    frank_account.set_balance(1000.0);
    
    if (frank_account.deposit(200.0))
        cout << "Deposit OK" << endl;
    else
        cout << "Deposit not allowed" << endl;
        
    if (frank_account.withdraw(400.0))
        cout << "Withdrawal OK" << endl;
    else
        cout << "Not sufficient funds" << endl;
    
    if (frank_account.withdraw(1400.0))
        cout << "Withdrawal OK" << endl;
    else
        cout << "Not sufficient funds" << endl;
    
    
	cout <<  endl;
	return 0;
}
