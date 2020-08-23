#include <iostream>
//#include <string>
//#include <vector>
#include "Mystring.h"

using namespace std;

int main()
{
//    Mystring empty;
//    Mystring larry("Larry"); // consructor
//    Mystring stooge {larry}; // copy constructor
//    
//    empty.display();
//    larry.display();
//    stooge.display();
    
//    Mystring a {"Hello"};
//    Mystring b;
//    b = a;
//    b = "This is a test";

//    Mystring a{"Hello"};
//    a = Mystring{"Hola"};
//    a = "Bonjour";

//    Mystring empty;
//    Mystring larry("Larry"); // consructor
//    empty = empty + larry;
//    larry = -larry;
//    empty.display(); //Larry
//    larry.display(); //larry

    Mystring larry {"Larry"};
    Mystring moe {"Moe"};
    Mystring curly;
    cout << "Enter the 3rd stooges first name: ";
    cin >> curly;
    cout << "Three stooges are: " << larry << ", " << moe << ", " << curly << endl;


	cout <<  endl;
	return 0;
}
