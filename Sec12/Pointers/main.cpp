#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	int *p; // declaring pointer without initialization
    
    cout << "Value of p: " << p << endl; //garbage
    cout << "Address of p: " << &p << endl;
    cout << "sizeog p: " << sizeof(p) << endl;
    
    p = nullptr; // set p to point nowhere
    
    cout << "Value of p: " << p << endl << endl;
    
    cout << "===============================\n";
    
    int *p1 {nullptr};
    double *p2 {nullptr};
    unsigned long long *p3 {nullptr};
    vector<string> *p4 {nullptr};
    string *p5 {nullptr}; // all have same sizes!
    
    cout << "sizeog p1: " << sizeof(p1) << endl;
    cout << "sizeog p2: " << sizeof(p2) << endl;
    cout << "sizeog p3: " << sizeof(p3) << endl;
    cout << "sizeog p4: " << sizeof(p4) << endl;
    cout << "sizeog p5: " << sizeof(p5) << endl << endl;
    
    cout << "===============================\n";
    
    int score {10};
    double high_temp {100.7};
    
    int *score_ptr {nullptr};
    
    score_ptr = &score; // ok
    
    cout << "Value of score: " << score << endl; //garbage
    cout << "Address of score: " << &score << endl;
    cout << "Value of score_ptr: " << score_ptr << endl << endl;
    
    //score_ptr = &high_temp; // compiler error - type mismatch
    
    cout << "===============================\n";
    
    cout << *score_ptr << endl; // accessing the data at the address in the pointer
    *score_ptr = 200;
    cout << *score_ptr << endl;
    cout << score << endl << endl;
    
    double low_temp {37.4};
    double *temp_ptr {&high_temp};
    
    cout << *temp_ptr << endl; // 100.7
    temp_ptr = &low_temp;
    cout << *temp_ptr << endl << endl; // 37.4
    
    cout << "===============================\n";
    
    vector<string> stooges {"Larry", "Moe", "Curly"};
    vector<string> *vector_ptr {nullptr};
    
    vector_ptr = &stooges;
    
    cout << "First stooge: " << (*vector_ptr).at(0) << endl; // Larry
    cout << "Stooges: ";
    for (auto stooge: *vector_ptr)
        cout << stooge << " ";
    cout << endl;
    
    
	return 0;
}
