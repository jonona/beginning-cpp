#include <iostream>
#include <vector>

using namespace std;

// Function prototypes
void display_menu();
char get_choice();
void switch_menu(char, vector<int>);
void print_list(vector<int>);
void mean(vector<int>);
void add(vector<int>);
void smallest(vector<int>);
void largest(vector<int>);
void quit();


int main()
{   
    vector<int> list {1, 2, 3, 4, 7};
    char choice {};
    
	do{
        display_menu();
        choice = get_choice();
        switch_menu(choice, list);
        
    } while (choice != 'Q' && choice != 'q');
    
	return 0;
}

// Function displaying menu
void display_menu(){
    cout << endl;
    cout << "P - print numbers" << endl;
    cout << "M - display mean" << endl;
    cout << "A - add a number" << endl;
    cout << "S - display the smallest number" << endl;
    cout << "L - display the largest number" << endl;
    cout << "Q - quit" << endl << endl;
}

// Function to get the selection from menu
char get_choice(){
    char choice;
    cin >> choice;
    return tolower(choice);
}

// Function with selection
void switch_menu(char choice, vector<int> list){
     switch (choice){
        case 'p': 
            print_list(list);
            break;
        case 'm': 
            mean(list);
            break;
        case 'a': 
            add(list);
            break;
        case 's': 
            smallest(list);
            break;
        case 'l': 
            largest(list);
            break;
        case 'q':
            quit();
            break;
            
        default: 
            cout << "Illegal choice!" << endl;
    }
}

// Printing the list
void print_list(vector<int> list){
    cout << "Numbers are: ";
    for (int i=0; i<list.size(); i++)
        cout << list.at(i) << " ";
    cout << endl;
}

// Calculating and printing the mean
void mean(vector<int> list){
    double sum {0};
    for (int i=0; i<list.size(); i++)
        sum += list.at(i);
    cout << "Mean is: " << sum/list.size() << endl;
}

// Add a number to the list
void add(vector<int> list){
    int num {};
    cout << "Input new number: ";
    cin >> num;
    list.push_back(num);
    cout << num << " is added" << endl;
}

// Find and print smallest number
void smallest(vector<int> list){
    int s {list.at(0)};
    for (int i{}; i<list.size(); i++)
        if (list.at(i) < s)
            s=list.at(i);
    cout << "Smallest number is: " << s << endl;
}

// Find and print largest number
void largest(vector<int> list){
    int l {list.at(0)};
    for (int i{}; i<list.size(); i++)
        if (list.at(i) > l)
            l=list.at(i);
    cout << "Largest number is: " << l << endl;
}

void quit(){
    cout << "Bye!" << endl;
}

