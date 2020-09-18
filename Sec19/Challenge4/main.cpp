#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    ofstream outfile {"output.txt"}; 
    ifstream infile {"play.txt"};
    
    if (!outfile) {
        cerr << "Can't open out file" << endl;
        return 1;
    }
    if (!infile) {
        cerr << "Can't open in file" << endl;
        return 1;
    }
    
    
    string line;
    int counter {1};
    
    while (getline(infile, line)) {
        if (!line.empty()){
            outfile << setw(7) << left << counter
                    << line << endl;
            counter++;
        } else {
            outfile << endl;
        }
    }
    
    cout << "Text is copied to a new file with line numbers" << endl;
    outfile.close();
    infile.close();
    
	cout <<  endl;
	return 0;
}
