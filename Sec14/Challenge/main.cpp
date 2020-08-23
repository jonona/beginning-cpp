#include <iostream>
//#include <string>
//#include <vector>
#include "Mystring.h"

using namespace std;

int main()
{
    cout << boolalpha << endl;
    Mystring a {"frank"};
    Mystring b {"frank"};
    
    cout << (a==b) << endl; //true
    cout << (a!=b) << endl; //false
    
    b = "george";
    cout << (a==b) << endl; //false
    cout << (a!=b) << endl; //true
    cout << (a<b) << endl; //true
    cout << (a>b) << endl; //false
    
    Mystring s1{"FRANK"};
    s1 = -s1;
    cout << s1 << endl; //frank
    
    s1 = s1 + "***";
    cout << s1 << endl; //frank***
    
    Mystring s2 {"123"};
    s2 = s2 *4;
    cout << s2 << endl; //123123123
    
    Mystring s3 {"FRANK"};
    s3 += " HI";
    cout << s3 << endl; //FRANK HI
    
	cout <<  endl;
	return 0;
}
