#include <iostream>
#include <string>

//using namespace std;

template <typename T>
T min(T a, T b){
    return (a<b) ? a : b;
}

template <typename T1, typename T2>
void func(T1 a, T2 b){
    std::cout << a << " " << b << std::endl;
}

struct person{
    std::string name;
    int age;
    bool operator<(const person &rhs) const {
        return this->age < rhs.age;
    }
};

std::ostream &operator<<(std::ostream &os, const person &p){
    os << p.name;
    return os;
}

template <typename T>
void my_swap(T &a, T &b){
    T temp = a;
    a = b;
    b = temp;
}

int main()
{   
    std::cout << "---------------------------" << std::endl;
    std::cout << min<int>(2, 3) << std::endl;
    std::cout << min(2, 3) << std::endl;
    std::cout << min('A', 'B') << std::endl;
    std::cout << min(12.5, 14.99) << std::endl;
    std::cout << min(5+2*2, 7+40) << std::endl;
    
    std::cout << "---------------------------" << std::endl;
    person p1 {"Curly", 50};
    person p2 {"Moe", 43};
    person p3 {min(p1, p2)};
    std::cout << p3.name << " is younger" << std::endl;
    func(p1, p2);
    
    std::cout << "---------------------------" << std::endl;
    func<int,int>(1, 2);
    func(1, 2);
    func(0.3, 'B');
    
    std::cout << "---------------------------" << std::endl;
    int x{100};
    int y{200};
    std::cout << x << ", " << y << std::endl;
    my_swap(y, x);
    std::cout << x << ", " << y << std::endl;
    
    
	std::cout << std::endl;
	return 0;
}
