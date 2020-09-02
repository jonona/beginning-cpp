#include <iostream>
//#include <string>
#include <vector>
//#include "TrustAccount.h"
//#include "CheckingAccount.h"
#include "AccountUtils.h"

using namespace std;

int main()
{
    cout.precision(2);
    cout << fixed;
    
    //Accounts
    vector<Account> accounts;
    accounts.push_back(Account{});
    accounts.push_back(Account{"Larry"});
    accounts.push_back(Account{"Moe", 2000});    
    accounts.push_back(Account{"Curly", 5000});
    
    display(accounts);
    deposit(accounts, 1000);
    withdraw(accounts, 2000);
    
    //Savings
    vector<SavingsAccount> sav_accounts;
    sav_accounts.push_back(SavingsAccount{});
    sav_accounts.push_back(SavingsAccount{"Superman"});
    sav_accounts.push_back(SavingsAccount{"Batman", 2000});    
    sav_accounts.push_back(SavingsAccount{"Wonderwoman", 5000, 5.0});
    
    display(sav_accounts);
    deposit(sav_accounts, 1000);
    withdraw(sav_accounts, 2000);
    
    //Checking
    vector<CheckingAccount> check_accounts;
    check_accounts.push_back(CheckingAccount{});
    check_accounts.push_back(CheckingAccount{"Ann"});
    check_accounts.push_back(CheckingAccount{"Bill", 2000});    
    check_accounts.push_back(CheckingAccount{"Wes", 5000});
    
    display(check_accounts);
    deposit(check_accounts, 1000);
    withdraw(check_accounts, 2000);
    
    //Trust
    vector<TrustAccount> trust_accounts;
    trust_accounts.push_back(TrustAccount{});
    trust_accounts.push_back(TrustAccount{"Cat"});
    trust_accounts.push_back(TrustAccount{"Dog", 2000});    
    trust_accounts.push_back(TrustAccount{"Cow", 5000, 5.0, 3});
    
    display(trust_accounts);
    deposit(trust_accounts, 5000);
    withdraw(trust_accounts, 6000);
    
	cout <<  endl;
	return 0;
}
