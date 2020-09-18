#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

void ruler(){
    cout << "\n1234567890123456789012345678901234567890" << endl;
}

int main()
{
    int num1{1234};
    double num2{1234.5678};
    string hello {"Hello"};
    
    cout << "\n----------------------Default----------------------" << endl;
    ruler();
    cout << num1
         << num2
         << hello
         << endl;
         
    cout << "\n----------------------Default one per line----------------------" << endl;
    ruler();
    cout << num1 << endl;
    cout << num2 << endl;
    cout << hello << endl;
    
    cout << "\n----------------------Width 10 for 1----------------------" << endl;
    ruler();
    cout << setw(10) << num1
         << num2
         << hello
         << endl;
         
    cout << "\n----------------------Width 10 for 1&2----------------------" << endl;
    ruler();
    cout << setw(10) << num1
         << setw(10) << num2
         << hello
         << endl;
         
    cout << "\n----------------------Width 10 for all and left align----------------------" << endl;
    ruler();
    cout << setw(10) << left << num1
         << setw(10) << left << num2
         << setw(10) << left << hello
         << endl;
         
    cout << "\n----------------------Width 10 for all, left align, setfill----------------------" << endl;
    ruler();
    cout << setw(10) << left << setfill('*') << num1
         << setw(10) << left << setfill('#') << num2
         << setw(10) << left << setfill('+') << hello
         << endl;
    
	cout <<  endl;
	return 0;
}
