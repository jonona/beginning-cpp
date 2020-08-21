#include <iostream>
#include <vector>

using namespace std;

int main()
{
    char choice {};
    vector<int> list {1, 2, 3, 4, 7};
    
	do {
        cout << endl;
        cout << "P - print numbers" << endl;
        cout << "M - display mean" << endl;
        cout << "A - add a number" << endl;
        cout << "S - display the smallest number" << endl;
        cout << "L - display the largest number" << endl;
        cout << "Q - quit" << endl << endl;
        cin >> choice;
        
        switch (choice){
            case 'P':
            case 'p': {
                cout << "Numbers are: ";
                for (int i=0; i<list.size(); i++)
                    cout << list.at(i) << " ";
                cout << endl;
                break;
            }
            case 'M':
            case 'm': {
                double sum {0};
                for (int i=0; i<list.size(); i++)
                    sum += list.at(i);
                cout << "Mean is: " << sum/list.size() << endl;
                break;
            }
            case 'A':
            case 'a': {
                int num {};
                cout << "Input new number: ";
                cin >> num;
                list.push_back(num);
                cout << num << " is added" << endl;
                break;
            }
            case 'S':
            case 's': {
                int s {list.at(0)};
                for (int i{}; i<list.size(); i++)
                    if (list.at(i) < s)
                        s=list.at(i);
                cout << "Smallest number is: " << s << endl;
                break;
            }
            case 'L':
            case 'l': {
                int l {list.at(0)};
                for (int i{}; i<list.size(); i++)
                    if (list.at(i) > l)
                        l=list.at(i);
                cout << "Largest number is: " << l << endl;
                break;
            }
            case 'Q':
            case 'q':
                cout << "Bye!" << endl;
                break;
                
            default: 
                cout << "Illegal choice!" << endl;
                
        }
        
        
        
    } while (choice != 'Q' && choice != 'q');
    
	return 0;
}
