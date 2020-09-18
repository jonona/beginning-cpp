#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

struct City{
    string name;
    long population;
    double cost;
};

struct Country{
    string name;
    vector<City> cities;
};

struct Tours{
    string title;
    vector<Country> countries;
};



int main()
{
    Tours tours
    { "Tour Ticket Prices from Toronto", 
        {
            {
                "Colombia", {
                    {"Bogota", 8779000, 403.4454},
                    {"Cali", 3753000, 462.19999},
                    {"Medellin", 4563000, 392.93455},
                },
            },
            {
                "Russia", {
                    {"Moscow", 13465000, 725.6722},
                    {"Kaliningrad", 7584000, 602.31},
                    {"Ufa", 2658000, 954.85},
                },
            },
        }
    };
    
    cout << setw(50) << tours.title << endl;
    cout << endl;
    cout << setw(20) << left << "Country"
        << setw(20) << left << "City"
        << setw(15) << right << "Population"
        << setw(15) << right << "Price"
        << endl;
    cout << setw(70) << setfill('-') << "" << endl;
    
    cout << setfill(' ');  
    cout << setprecision(2) << fixed;
    
    for (auto country: tours.countries){
        for (size_t i{0}; i < country.cities.size(); i++){
            cout << setw(20) << left << ((i==0) ? country.name : "")
                << setw(20) << left << country.cities.at(i).name
                << setw(15) << right << country.cities.at(i).population
                << setw(15) << right << country.cities.at(i).cost
                << endl;
        }
    }
    
	cout <<  endl;
	return 0;
}
