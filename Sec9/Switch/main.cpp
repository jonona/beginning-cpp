#include <iostream>

using namespace std;

int main()
{
    char letter_grade {};
    
	cout << "Input the letter grade you expect: " << endl;
    cin >> letter_grade;
    
    switch (letter_grade) {
        case 'a':
        case 'A': 
            cout << "You need a 90 or above, study hard!" << endl;
            break;
        case 'b':
        case 'B': 
            cout << "You need 80-89, go study!" << endl;
            break;
        case 'c':
        case 'C': 
            cout << "You need 70-79." << endl;
            break;
        case 'd':
        case 'D': 
            cout << "You need 60-69, go study!" << endl;
            break;
        case 'f':
        case 'F': 
            {
            char confirm {};
            cout << "Are you sure? Y/N" << endl;
            cin >> confirm;
            if (confirm=='Y' || confirm=='y')
                cout << "Ok, i guess you didnt study" << endl;
            else if (confirm=='n' || confirm=='N')
                cout << "Good." << endl;
            else
                cout << "illegal choice" << endl;
            break;  
            }
            
        default:
            cout << "Sorry, thats not a valid grade.";
    }
    
	return 0;
}
