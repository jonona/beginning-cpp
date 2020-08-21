#include <iostream>

using namespace std;

int main()
{
    cout << "How many small rooms?" << endl;
    int num_rooms_small {0};
    cin >> num_rooms_small;
    
    cout << "How many large rooms?" << endl;
    int num_rooms_large {0};
    cin >> num_rooms_large;
    
    const double price_per_room_small {25.0};
    const double price_per_room_large {35.0};
    const double sales_tax {0.06};
    
    cout << "Estimate for cleaning service" << endl;
    
    cout << "Number of small rooms: " << num_rooms_small << endl;
    cout << "Price per small room: $" << price_per_room_small << endl;
    cout << "Number of large rooms: " << num_rooms_large << endl;
    cout << "Price per large room: $" << price_per_room_large << endl;
    cout << "Cost: $" << price_per_room_small*num_rooms_small+price_per_room_large*num_rooms_large << endl;
    cout << "Tax: $" << (price_per_room_small*num_rooms_small+price_per_room_large*num_rooms_large)*sales_tax << endl;
    cout << "========================" << endl;
    cout << "Total: $" << (price_per_room_small*num_rooms_small+price_per_room_large*num_rooms_large)*(1+sales_tax) << endl;
    
	return 0;
}
