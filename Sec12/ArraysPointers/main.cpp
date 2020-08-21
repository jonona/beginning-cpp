#include <iostream>

using namespace std;

int main()
{
    int score[] {100,95,89};
    cout << "Value of scores: " << score << endl;
    int *score_ptr {score};
	cout << "Value of scores pointer: " << score_ptr << endl;
    
    cout << "Array subscript notation -------------------------" << endl;
    cout << score[0] << endl << score[1] << endl << score[2] << endl;
    
    cout << "Pointer subscript notation -------------------------" << endl;
    cout << score_ptr[0] << endl << score_ptr[1] << endl << score_ptr[2] << endl;
    
    cout << "Pointer offset notation -------------------------" << endl;
    cout << *score_ptr << endl << *(score_ptr+1) << endl << *(score_ptr+2) << endl;
    
    cout << "Array offset notation -------------------------" << endl;
    cout << *score << endl << *(score+1) << endl << *(score+2) << endl;
    
	return 0;
}
