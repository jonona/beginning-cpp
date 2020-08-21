#include <iostream>

using namespace std;

int main()
{
    int cents {};
    
	cout << "Input number of cents: ";
    cin >> cents;
    
    int dollars {}, quarters {}, dimes {}, nickels {}, pennies {};

    const int dollar_value {100};
    const int quarter_value {25}; 
    const int dime_value {10};
    const int nickel_value {5};
    const int penny_value {1};
    
    dollars = cents / dollar_value;
    cents = cents % dollar_value;

    quarters = cents / quarter_value;
    cents = cents % quarter_value;
    
    dimes = cents / dime_value;
    cents = cents % dime_value;
    
    nickels = cents / nickel_value;
    cents = cents % nickel_value;
    
    pennies = cents / penny_value;
    cents = cents % penny_value;
    
    cout << dollars << " dollars" << endl;
    cout << quarters << " quarters" << endl;
    cout << dimes << " dimes" << endl;
    cout << nickels << " nickels" << endl;
    cout << pennies << " pennies" << endl;
    
	return 0;
}
