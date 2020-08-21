#include <iostream>

using namespace std;

int main()
{
    cout << boolalpha; // to display True/False instead of 1/0
    
    int total {};
    int num1 {}, num2 {}, num3 {};
    const int count {3};
    
	cout << "Enter 3 int separated by spaces: " ;
    cin >> num1 >> num2 >> num3;
    total = num1 + num2 + num3;
    
    double avg {0.0};
    avg = static_cast<double>(total) / count;
    
    cout << "Sum is " << total << endl;
    cout << "Average is " << avg << endl;
    
	return 0;
}
