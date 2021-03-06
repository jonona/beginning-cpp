#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << "noboolalpha - default (10==10): " << (10==10) << endl;
    cout << "noboolalpha - default (10==20): " << (10==20) << endl;
    
    cout << boolalpha;
    cout << "boolalpha (10==10): " << (10==10) << endl;
    cout << "boolalpha (10==20): " << (10==20) << endl;
    
    cout << noboolalpha;
    cout << "noboolalpha (10==10): " << (10==10) << endl;
    cout << "noboolalpha (10==20): " << (10==20) << endl;
    
    cout.setf(ios::boolalpha);
    cout << "boolalpha (10==10): " << (10==10) << endl;
    cout << "boolalpha (10==20): " << (10==20) << endl;
    
    cout << resetiosflags(ios::boolalpha);
    cout << "Default boolalpha (10==10): " << (10==10) << endl;
    cout << "Default boolalpha (10==20): " << (10==20) << endl;
    
	cout <<  endl;
	return 0;
}
