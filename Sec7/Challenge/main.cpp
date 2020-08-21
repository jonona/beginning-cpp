#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> vector1;
    vector<int> vector2;
    
    vector1.push_back(10);
    vector1.push_back(20);
    cout << "Vector 1: " << vector1.at(0) << " " << vector1.at(1) << endl;;
    cout << "Vector 1 size: " << vector1.size() << endl;
    
    vector2.push_back(100);
    vector2.push_back(200);
    cout << "Vector 2: " << vector2.at(0) << " " << vector2.at(1) << endl;
    cout << "Vector 2 size: " << vector2.size() << endl;
    
    vector<vector<int>> vector2d;
    vector2d.push_back(vector1);
    vector2d.push_back(vector2);
    cout << "Vector 2D: " << endl << vector2d.at(0).at(0) << " " << vector2d.at(0).at(1) << endl << vector2d.at(1).at(0) << " " << vector2d.at(1).at(1) << endl;
    
    vector1.at(0) = 100; 
    cout << "Vector 2D: " << endl << vector2d.at(0).at(0) << " " << vector2d.at(0).at(1) << endl << vector2d.at(1).at(0) << " " << vector2d.at(1).at(1) << endl;
    cout << "Vector 1: " << vector1.at(0) << " " << vector1.at(1) << endl;
    
	return 0;
}
