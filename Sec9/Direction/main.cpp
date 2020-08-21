#include <iostream>

using namespace std;

int main()
{
    enum direction {left, right, up, down};
    
    direction heading {left};
    
    switch (heading){
         case left:
            cout << "Going left" << endl;
            break;
        case right:
            cout << "Going right" << endl;
            break;
        case up:
            cout << "Going up" << endl;
            break;
        default:
            cout << "Default" << endl;
    }
    
	return 0;
}
