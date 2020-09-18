#include <iostream>
#include <string>
#include <vector>

template <typename T>
class Item {
private:
    std::string name;
    T value;
public:
    Item(std::string name, T value) : name{name}, value{value} {}
    std::string get_name() const {return name;}
    T get_value() const {return value;}
    
    friend std::ostream &operator<<(std::ostream &os, const Item &it){
    os << it.name << " " << it.value << std::endl;
    return os;}
};


template <typename T1, typename T2>
struct MyPair {
    T1 first;
    T2 second;
    friend std::ostream &operator<<(std::ostream &os, const MyPair &p){
    os << p.first << ", " << p.second << std::endl;
    return os;}
};

int main()
{
    Item <int> item1 {"Joe", 100};
    std::cout << item1;
    Item <std::string> item2 {"John", "Doctor"};
    std::cout << item2;
    Item <Item<std::string>> item3 {"Mary", {"Good", "Human"}};
    std::cout << item3;
    
    std::cout << "---------------------------" << std::endl;
    std::vector<Item<double>> vec{};
    vec.push_back(Item<double>{"Carrie", 22.5});
    vec.push_back(Item<double>{"Miranda", 25.33});
    vec.push_back(Item<double>{"Charlotte", 24.85});
    
    for (const auto v:vec)
        std::cout << v;
        
    std::cout << "---------------------------" << std::endl;
    MyPair <std::string, int>  p1 {"Samantha", 23};
    MyPair <int, double> p2 {2, 102.4};
    std::cout << p1;
    std::cout << p2;
    
	std::cout << std::endl;
	return 0;
}
