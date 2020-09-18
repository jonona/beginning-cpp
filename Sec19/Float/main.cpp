#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double num1{123456789.987654321};
    double num2{1234.5678};
    double num3{1234.0};
    
    cout << "\n-------------------Default------------------" << endl;
    cout << num1 << endl;
    cout << num2 << endl;
    cout << num3 << endl;
    
    cout << "\n-------------------Precision 2------------------" << endl;
    cout << setprecision(2);
    cout << num1 << endl;
    cout << num2 << endl;
    cout << num3 << endl;
    
    cout << "\n-------------------Precision 9------------------" << endl;
    cout << setprecision(9);
    cout << num1 << endl;
    cout << num2 << endl;
    cout << num3 << endl;
    
    cout << "\n-------------------Precision 3 fixed------------------" << endl;
    cout << setprecision(3) << fixed;
    cout << num1 << endl;
    cout << num2 << endl;
    cout << num3 << endl;
    
    cout << "\n-------------------Precision 3 scientific------------------" << endl;
    cout << setprecision(3) << scientific;
    cout << num1 << endl;
    cout << num2 << endl;
    cout << num3 << endl;
    
    cout << "\n-------------------Precision 3 scientific uppercase------------------" << endl;
    cout << setprecision(3) << scientific << uppercase;
    cout << num1 << endl;
    cout << num2 << endl;
    cout << num3 << endl;
    
    cout << "\n-------------------Precision 3 scientific showpos------------------" << endl;
    cout << setprecision(3) << scientific << showpos;
    cout << num1 << endl;
    cout << num2 << endl;
    cout << num3 << endl;
    
    cout.unsetf(ios::scientific | ios::fixed);
    cout << resetiosflags(ios::showpos);
    
    cout << "\n-------------------Precision 10 showpoint------------------" << endl;
    cout << setprecision(10) << showpoint;
    cout << num1 << endl;
    cout << num2 << endl;
    cout << num3 << endl;
    
	cout <<  endl;
	return 0;
}
