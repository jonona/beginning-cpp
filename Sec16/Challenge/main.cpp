#include <iostream>
//#include <string>
#include <vector>
#include "TrustAccount.h"
#include "CheckingAccount.h"
#include "AccountUtils.h"

using namespace std;

int main()
{
//    Account *ptr = new TrustAccount("Leo", 1000, 0.5);
//    cout << *ptr << endl;

//    Account frank {"Frank", 500}; // does not compile
//    cout << frank << endl;
    
    CheckingAccount frank {"Frank", 5000};
    cout << frank << endl;
    
    Account *trust = new TrustAccount("James");
    cout << *trust << endl;
    
    Account *p1 = new CheckingAccount("Larry", 10000);
    Account *p2 = new SavingsAccount("Moe", 1000);
    Account *p3 = new TrustAccount("Curly");
    
    vector<Account*> accounts {p1,p2,p3};
    
    display(accounts);
    deposit(accounts, 1000);
    withdraw(accounts, 2000);
    
    display(accounts);
    
    delete p1;
    delete p2;
    delete p3;
    
	cout <<  endl;
	return 0;
}
