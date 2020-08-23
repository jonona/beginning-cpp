#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Move{
private:
    int *data;
public:
    void set_data_value(int d) {*data = d;}
    int get_data_value(){return *data;}
    //Constructor
    Move(int d);
    //Copy constructor
    Move(const Move &source);
    //Move constructor
    Move(Move &&source) noexcept;
    //Destructor
    ~Move();
};

Move::Move(int d){
    data = new int;
    *data=d;
    cout << "Constructor for: " << d << endl;
}

Move::Move(const Move &source)
    :Move {*source.data}{
    cout << "Copy constructor - deep copy for: " << *data << endl; // makes a copy of the pointer AND the value
}

Move::Move(Move &&source) noexcept
    :data{source.data}{
        source.data = nullptr;
        cout << "Move constructor - moving resource: " << *data << endl;
    }
    
Move::~Move(){
    if (data != nullptr)
        cout << "Destructor freeing data for: " << *data << endl;
    else
        cout << "Destructor freeing data for nullpointer" << endl;
    delete data;
}


int main()
{
    vector<Move> vec;
    
    vec.push_back(Move(10));
    
	cout <<  endl;
	return 0;
}
