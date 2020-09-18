#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    ofstream outfile {"output.txt", ios::app}; // append mode
    
    if (!outfile) {
        cerr << "Can't open file" << endl;
        return 1;
    }
    string line;
    cout << "Enter something to write to file: ";
    getline(cin, line);
    outfile << line << endl;
    
    
    outfile.close();
	cout <<  endl;
	return 0;
}
