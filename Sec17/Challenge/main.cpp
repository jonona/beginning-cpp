#include <iostream>
#include <memory>
#include <vector>

using namespace std;

class Test {
private:
    int data;
public:
    Test() : data{0} {cout << "\tTest constructor (" << data <<")" << endl;}
    Test(int data) : data{data} {cout << "\tTest constructor (" << data <<")" << endl;}
    int get_data() const {return data;}
    ~Test() {cout << "\tTest destructor (" << data <<")" << endl;}
};

unique_ptr<vector<shared_ptr<Test>>> make(){ // creates pointer
    return make_unique<vector<shared_ptr<Test>>>();
}

void fill(vector<shared_ptr<Test>> &vec, int num){ // asks user for data points and fills the vector
    cout << "Enter data points" << endl;
    for (int i{0}; i<num; ++i){
        cout << "#" << i+1 << ": ";
        int n;
        cin >> n;
        vec.push_back(make_shared<Test>(n));
    }
}

void display(const vector<shared_ptr<Test>> &vec){ // displays data in each Test object
    cout << "\nDisplaying vector data: " << endl;
    cout << "[ ";
    for (auto const &v: vec)
        cout << (*v).get_data() << " ";
    cout << "]" << endl;
}


int main()
{
    unique_ptr<vector<shared_ptr<Test>>> vec_ptr;
    vec_ptr = make();
    cout << "How many data points do you want: ";
    int num;
    cin >> num;
    fill(*vec_ptr, num);
    display(*vec_ptr);
    
	cout <<  endl;
	return 0;
}
