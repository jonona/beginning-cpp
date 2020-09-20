#include <iostream>
#include <string>
#include <set>


class Person {
    friend std::ostream &operator<<(std::ostream &os, const Person &p);
    std::string name;
    int age;
public:
    Person() : name{"Unknown"}, age{0} {};
    Person(std::string name, int age)
        : name{name}, age{age} {}
    bool operator<(const Person &rhs) const {
        return (this->age < rhs.age);
    }
    bool operator==(const Person &rhs) const {
        return (this->age == rhs.age && this->name == rhs.name);
    }
};

std::ostream &operator<<(std::ostream &os, const Person &p) {
    os << p.name << "-" << p.age;
    return os;
}

template <typename T>
void display(const std::set<T> &I) {
    std::cout << "[ ";
    for (const auto &item: I)
        std::cout << item << " ";
    std::cout << "]" << std::endl;
}

void test1() {
    std::cout << "\nTest 1---------------------------" << std::endl;
    std::set<int> s1 {1,4,3,5,2}; // elements are sorted by default
    display(s1);
    
    s1 = {1,2,3,1,2,1,1,3,3,5,4}; // set only contains unique elements!
    display(s1);
    
    s1.insert(0);
    s1.insert(10);
    display(s1);
    
    if (s1.count(10))
        std::cout << "10 is in the set" << std::endl;
    else
        std::cout << "10 is not in the set" << std::endl;
        
    auto it = s1.find(5); // iterator
    if (it != s1.end())
        std::cout << "Found: " << *it << std::endl;
        
    s1.clear();
    display(s1);
}

void test2() {
    std::cout << "\nTest 2---------------------------" << std::endl;
    std::set<Person> stooges {
        {"Larry", 18},
        {"Moe", 20},
        {"Curly", 13}
    };
    display(stooges);
    
    stooges.emplace("James", 33); // calls a constructor
    display(stooges);
    
    stooges.emplace("Kate", 33); // no, because 33 already exists (uses age to decide)
    display(stooges);
    
    auto it = stooges.find(Person{"Moe", 20});
    if (it != stooges.end())
        stooges.erase(it);
    display(stooges);
    
    it = stooges.find(Person{"BlahBlah", 33}); // will delete James!
    if (it != stooges.end())
        stooges.erase(it);
    display(stooges);
}

void test3() {
    std::cout << "\nTest 3---------------------------" << std::endl;
    std::set<std::string> s {"A", "B", "C"};
    display(s);
    
    auto result = s.insert("D"); // returns an std::pair
    display(s);
    
    std::cout << std::boolalpha;
    std::cout << "first: " << *(result.first) << std::endl;
    std::cout << "second: " << result.second << std::endl;
    
    result = s.insert("A");
    std::cout << "first: " << *(result.first) << std::endl;
    std::cout << "second: " << result.second << std::endl;
}

int main()
{
//    test1();
//    test2();
    test3();
    
	return 0;
}
