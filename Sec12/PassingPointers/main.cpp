#include <iostream>
#include <string>
#include <vector>

using namespace std;

void swap(int *a, int *b){ // using values of addresess a and b - "in-place" function
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x{100}, y{200};
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    
    swap(&x, &y); // passing addresses
    
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    
	cout << endl;
    
	return 0;
}
