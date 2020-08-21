/*
 * User enters a message &  program substitutes the letters
 * according to the key (reverse alphabet) and then back.
 */

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key {"ZYXWVUTSRQPONMLKJIHGFEDCBAzyxwvutsrqponmlkjihgfedcba"};
	
    cout << "Enter your message: ";
    string message;
    getline(cin,message);
    cout << "Encrypting message..." << endl;
    
    string cipher;
    
    for (char i: message){
        if (alphabet.find(i) != string::npos)
            cipher += key.at(alphabet.find(i));
        else
            cipher += i;
    }
        
    cout << "Secret message: " << cipher << endl;
    cout << "\nDecrypting message..." << endl;
    
    string recovered;
    
    for (char i: cipher){
        recovered += (isalpha(i)) ? alphabet.at(key.find(i)) : i;
    }
    
    cout << "Recovered message: " << recovered << endl;
    
	return 0;
}
