#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    fstream infile;
    string line;
    int num;
    double total;
    
    infile.open("test.txt");
    if (!infile) {
        cerr << "Can't open file" << endl;
        return 1;
    }
    
    infile >> line >> num >> total;
    cout << line << endl;
    cout << num << endl;
    cout << total << endl;
    
    infile.close();
    
	cout <<  endl;
	return 0;
}
