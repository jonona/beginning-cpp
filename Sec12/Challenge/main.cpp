/*
 * Function apply_all expects two arrays of int and their sizes and dynamically
 * allocates a new array of int whose size is the product of 2 array sizes
 * 
 * The function should loop through the second array and multiply each element
 * across each element of array 1 and store it in the newly created array
 * 
 * The Function should reurn a poiner
 */



#include <iostream>
#include <string>
#include <vector>

using namespace std;

int *apply_all(const int *const array1, size_t size1, const int *const array2, size_t size2){
    int *new_array {nullptr};
    
    new_array = new int[size1*size2];
    int position {0};
    for (size_t i{0}; i<size2; i++)
        for (size_t j{0}; j<size1; j++){
            *(new_array+position) = array2[i]*array1[j];
            position++;
        }
    return new_array;
}

void print(const int *const array, size_t size){
    for (size_t i{0}; i<size; i++)
        cout << array[i] << " ";
    cout << endl;
}

int main()
{
    int array1[] {1,3,5,7};
    int array2[] {2,4,6};
    
    cout << "Array 1: ";
    print(array1,4);
    
    cout << "Array 2: ";
    print(array2,3);
    
    cout << "\nCreating new array ..." << endl;
    int *new_ptr {nullptr};
    new_ptr = apply_all(array1, 4, array2, 3);
    
    cout << "New array: ";
    print(new_ptr,12);
    
    delete [] new_ptr;
    
	cout <<  endl;
	return 0;
}
