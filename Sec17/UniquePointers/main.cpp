#include <iostream>
#include <memory>
#include <vector>

#include "Account.h"
#include "CheckingAccount.h"
#include "SavingsAccount.h"
#include "TrustAccount.h"

using namespace std;

class Test {
private:
    int data;
public:
    Test() : data{0} {cout << "Test constructor (" << data <<")" << endl;}
    Test(int data) : data{data} {cout << "Test constructor (" << data <<")" << endl;}
    int get_data() const {return data;}
    ~Test() {cout << "Test destructor (" << data <<")" << endl;}
};

int main()
{
//    Test *t1 = new Test {1000};
//    delete t1;
        
//    unique_ptr<Test> t1 {new Test{9}};
//    unique_ptr<Test> t2 = make_unique<Test>(1000);
//    
//    unique_ptr<Test> t3;
//    t3 = move(t1);
//    if (!t1)
//        cout << "t1 is nullptr" << endl;

    unique_ptr<Account> a1 = make_unique<CheckingAccount>("Moe", 5000);
    cout << *a1 << endl;
    a1->deposit(5000);
    cout << *a1 << endl;
    
    vector<unique_ptr<Account>> accounts;
    
    accounts.push_back(make_unique<CheckingAccount>("James", 1000));
    accounts.push_back(make_unique<TrustAccount>("Emma", 5000, 4.5));
    accounts.push_back(make_unique<SavingsAccount>("Bill", 20000, 5.0));
    
    for (auto const &acc: accounts)
        cout << *acc << endl;
    
	cout <<  endl;
	return 0;
}
