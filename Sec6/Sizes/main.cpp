#include <iostream>
#include <climits>

using namespace std;

int main()
{
	cout << "char " << sizeof(char) << " bytes" << endl;
    cout << "int " << sizeof(int) << " bytes" << endl;
    cout << "long " << sizeof(long) << " bytes" << endl;
    
    cout << "short min " << SHRT_MIN << endl;
    cout << "short max " << SHRT_MAX << endl;
    cout << "int min " << INT_MIN << endl;
    cout << "int max " << INT_MAX << endl;
    
    return 0;
}
