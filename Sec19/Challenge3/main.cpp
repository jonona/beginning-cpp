#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    ifstream infile;
    
    infile.open("play.txt");
    if (!infile) {
        cerr << "Can't open file" << endl;
        return 1;
    }
    
    int counter{0};
    int overall{0};
    string reading_word{};
    string word{};
    
    cout << "Enter a word to search for: ";
    cin >> word;
    
    while (infile >> reading_word){
        overall++;
        if (reading_word.find(word) != string::npos)
            counter++;
    }
    
    cout << overall << " words were searched..." << endl;
    cout << "Word " << word << " was found " << counter << " times." << endl;
    
    infile.close();
	cout <<  endl;
	return 0;
}
