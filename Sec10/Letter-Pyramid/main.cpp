/*
C++ program that displays a Letter Pyramid from a user-provided std::string.
Prompt the user to enter a std::string and then from that string display a Letter Pyramid as follows:
If the user enters the string "ABC", then your program should display:
  A                                                                                                                    
 ABA                                                                                                                   
ABCBA 
 */
 
#include <iostream>
#include <string>

using namespace std;

int main()
{
	cout << "Enter your text for the pyramid: " << endl;
    
    string text;
    getline(cin, text);
    
    int size = text.size();
    for(int i{0}; i<size; i++){
        string spaces (size-i-1, ' '); //whitespaces of legth size-i
        cout << spaces;
        
        cout << text.substr(0, i+1); //printing out letters to the middle of the line
        
        for (int j=i; j>0; j--)
            cout << text.at(j-1); //printing out the letters in reverse
        cout << endl;
    }
    
	return 0;
}
