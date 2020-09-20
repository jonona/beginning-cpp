#include <iostream>
#include <set>
#include <map>

void display(const std::map<std::string, std::set<int>> &m) {
    std::cout << "[ ";
    for (const auto &elem: m) {
        std::cout << elem.first << ": [ ";
        for (const auto &set_elem: elem.second)
            std::cout << set_elem << " ";
        std::cout << "] ";
    }
    std::cout << "] " << std::endl;
}

template <typename T1, typename T2>
void display(const std::map<T1,T2> &I) {
    std::cout << "[ ";
    for (const auto &elem: I) {
        std::cout << elem.first << ":" << elem.second << " ";
    }
    std::cout << "] " << std::endl;
}

void test1() {
     std::cout << "\nTest 1---------------------------" << std::endl;
     std::map<std::string, int> m {
         {"Larry", 3},
         {"Moe", 1},
         {"Curly", 2}
     };
     display(m); // ordering by key (string)
     
     m.insert(std::pair<std::string, int>("Anna", 10));
     display(m);
     
     m.insert(std::make_pair("Joe", 5));
     display(m);
     
     m["Frank"] = 18;
     display(m);
     
     m["Frank"] += 10;
     display(m);
     
     m.erase("Frank");
     display(m);
}

void test2() {
     std::cout << "\nTest 2---------------------------" << std::endl;
     
     std::map<std::string, std::set<int>> grades {
         {"Larry", {100,98}},
         {"Moe", {87,92,74}},
         {"Curly", {66,75,50}}
     };
     display(grades);
     
     grades["Larry"].insert(95);
     display(grades);
     
     auto it = grades.find("Moe");
     if (it != grades.end())
            it->second.insert(1000); // insert 1000 into Moe's set
     display(grades);
}

int main()
{
    test1();
    test2();
	return 0;
}
