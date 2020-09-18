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
    
//    while (!infile.eof()){
//    infile >> line >> num >> total

    while(infile >> line >> num >> total) {
    cout << setw(10) << left << line
        << setw(10) << num
        << setw(10) << total << endl;
    }
    
    infile.close();
    
	cout <<  endl;
	return 0;
}
