#include <iostream>
//#include <string>
//#include <vector>

using namespace std;

// this class uses dynamic polymorphism for the withdraw method
class Account {
public:
    virtual void withdraw(double amount){
        cout << "In Account::withdraw" << endl;
    }
    virtual ~Account(){
        cout << "In Account destructor" << endl;
    }
};

class Checking : public Account {
public:
    virtual void withdraw(double amount){
        cout << "In Checking::withdraw" << endl;
    }
    virtual ~Checking(){
        cout << "In Checking destructor" << endl;
    }
};

class Savings : public Account {
public:
    virtual void withdraw(double amount){
        cout << "In Savings::withdraw" << endl;
    }
    virtual ~Savings(){
        cout << "In Savings destructor" << endl;
    }
};

class Trust : public Savings {
public:
    virtual void withdraw(double amount){
        cout << "In Trust::withdraw" << endl;
    }
    virtual ~Trust(){
        cout << "In Trust destructor" << endl;
    }
};

void do_withdraw(Account &account, double amount){
    account.withdraw(amount);
}

int main()
{
    Account a;
    Account &ref = a;
    ref.withdraw(1000); // Account
    
    Trust t;
    Account &ref1 = t;
    ref1.withdraw(1000); // Trust
    
    Account a1;
    Savings a2;
    Checking a3;
    Trust a4;
    
    do_withdraw(a1,100);
    do_withdraw(a2,100);
    do_withdraw(a3,100);
    do_withdraw(a4,100);
    
	cout <<  endl;
	return 0;
}
