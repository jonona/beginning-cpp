#include <iostream>

using namespace std;

int main()
{
    const double conv_rate {1.19};
    
    cout << "EUR to SD converter" << endl;
    cout << "Exchange rate: " << conv_rate << endl;
    
	cout << "Enter the value in EUR: ";
    
    double dollars {0.0};
    double euros {0.0};
    
    cin >> euros;
    dollars = euros * conv_rate;
    
    cout << "Value in USD: " << dollars << endl;
    
	return 0;
}
