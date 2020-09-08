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

void func(shared_ptr<Test> p) {
    cout <<"Use count: " << p.use_count() << endl;
}


int main()
{
    // use_count is the number of shared_ptr objects
    // managing the heap object
    
//    shared_ptr<int> p1 {new int {100}};
//    cout << "Use count: " << p1.use_count() << endl; //1
//    
//    shared_ptr<int> p2 {p1};
//    cout << "Use count: " << p1.use_count() << endl; //2
//    
//    p1.reset();
//    cout << "Use count: " << p1.use_count() << endl; //0
//    cout << "Use count: " << p2.use_count() << endl; //1
    
    
//    cout << "\n----------------------------------------" << endl;
//    shared_ptr<Test> ptr = make_shared<Test>(199);
//    func(ptr); // makes a copy, increases count and then count is decreased again
//    cout << "Use count: " << ptr.use_count() << endl;
//    
//    {
//        shared_ptr<Test> ptr1 = ptr;
//        cout << "Use count: " << ptr.use_count() << endl;
//        {
//            shared_ptr<Test> ptr2 = ptr;
//            cout << "Use count: " << ptr.use_count() << endl;
//            ptr.reset();
//        }
//        cout << "Use count: " << ptr.use_count() << endl;
//    }
//    cout << "Use count: " << ptr.use_count() << endl;
    
    
    cout << "\n----------------------------------------" << endl;
    shared_ptr<Account> acc1 = make_shared<TrustAccount>("Larry", 10000, 5.2);
    shared_ptr<Account> acc2 = make_shared<CheckingAccount>("Moe", 5000);
    shared_ptr<Account> acc3 = make_shared<SavingsAccount>("Curly", 600, 2.3);
    
    vector<shared_ptr<Account>> accounts;
    accounts.push_back(acc1); // makes a copy of acc, use count increases
    accounts.push_back(acc2);
    accounts.push_back(acc3);
    
    for (const auto &acc: accounts) {
        cout << *acc << endl;
        cout << "Use count: " << acc.use_count() << endl;
    }
    
    
    
	cout <<  endl;
	return 0;
}
