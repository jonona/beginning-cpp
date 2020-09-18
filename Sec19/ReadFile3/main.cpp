#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    fstream infile;
    
    infile.open("poem.txt");
    if (!infile) {
        cerr << "Can't open file" << endl;
        return 1;
    }
    
    string line{};
    while(getline(infile,line)){
        cout << line << endl;
    }
    
    infile.close();
    
	cout <<  endl;
	return 0;
}
