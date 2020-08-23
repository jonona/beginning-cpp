#include <iostream>
//#include <string>
//#include <vector>

#include "Account.h"
using namespace std;

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
