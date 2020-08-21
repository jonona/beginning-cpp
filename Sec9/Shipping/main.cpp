#include <iostream>

using namespace std;

int main()
{
    const double base {2.5};
	cout << "Enter package dimesions separated by space LxWxH: ";
    int L {}, W {}, H {};
    
    cin >> L >> W >> H;
    
    if (L<=10 && W<=10 && H<=10)
    {
        double cost {0.0};
        int volume {L*W*H};
        cost = base;
        
        if (volume > 500){
            cost += 0.25*base;
            cout << "Added 25% surcharge."<< endl;
        } else if (volume > 100) {
            cost += 0.1*base;
            cout << "Added 10% surcharge."<< endl;
        }
        cout << "Volume of your package is " << volume << endl;
        cout << "Total price is $" << cost << endl;
    } else {
    cout << "All dimensions must be 10 inches or less!" << endl;
    }
    
	return 0;
}
