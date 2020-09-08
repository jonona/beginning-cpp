#include <iostream>
#include <memory>
//#include <vector>

#include "Account.h"
#include "CheckingAccount.h"
#include "TrustAccount.h"
#include "SavingsAccount.h"



using namespace std;

int main()
{
    unique_ptr<Account> kats_acc;
    unique_ptr<Account> bobs_acc;
    try {
        kats_acc = make_unique<SavingsAccount>("Kat",-200,2.8);
        cout << *kats_acc << endl;
    }
    catch (IllegalBalanceException &ex){
        cout << ex.what() << endl;
    }
    
    try {
        bobs_acc = make_unique<CheckingAccount>("Bob",1000);
        cout << *bobs_acc << endl;
        bobs_acc->withdraw(500);
        cout << *bobs_acc << endl;
        bobs_acc->withdraw(800);
        cout << *bobs_acc << endl;
    }
    catch (IllegalBalanceException &ex){
        cerr << ex.what() << endl;
    }
    catch (InsufficientFundsException &ex){
        cerr << ex.what() << endl;
    }
    
	cout << "Program ended successfully" << endl;
	return 0;
}
