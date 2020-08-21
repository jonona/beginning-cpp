#include <iostream>
#include <string>
#include <vector>

using namespace std;

int *create_array(size_t size, int init_value=0){
    int *new_storage {nullptr}; // new pointer
    
    new_storage = new int[size]; // dynamically allocated memory
    for (size_t i{0}; i<size; i++)
        *(new_storage+i) = init_value;
    return new_storage; // returns pointer to an allocated array
}

void display(const int *const array, size_t size){ // cant change array address or array values
    for (size_t i{0}; i<size; i++)
        cout << array[i] << " ";
    cout << endl;
}

int main()
{
    int *my_array; // pointer
    size_t size{};
    int init_value{};
    
    cout << "Input size of the array: ";
    cin >> size;
    cout << "\nValue for initialization: ";
    cin >> init_value;
    
    my_array = create_array(size,init_value); // pointer now points to a dynamically allocated array
    cout << "---------------------------" << endl;
    
    display(my_array, size);
    delete [] my_array;
    
	cout <<  endl;
	return 0;
}
