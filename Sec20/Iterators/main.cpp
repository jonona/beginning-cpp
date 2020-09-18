#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <list>

void display(const std::vector<int> &vec){
    std::cout << "[ ";
    for (auto const &v: vec)
        std::cout << v << " ";
    std::cout << "]" << std::endl;
}

void test1() {
    std::cout << "\n----------------------------" << std::endl;
    std::vector<int> nums1 {1,2,3,4,5};
    auto it = nums1.begin(); // point to 1
    std::cout << *it << std::endl; // NOT a pointer, but sintex is similar
    
    it++; // point to 2
    std::cout << *it << std::endl;
    
    it+= 2; // point ot 4
    std::cout << *it << std::endl;
    
    it -= 2; // point to 2
    std::cout << *it << std::endl;
    
    it = nums1.end() - 1; // point to 5
    std::cout << *it << std::endl;
}

void test2() {
    std::cout << "\n----------------------------" << std::endl;
    std::vector<int> nums1 {1,2,3,4,5};
    
    std::vector<int>::iterator it = nums1.begin();
    while (it != nums1.end()){
        std::cout << *it << std::endl;
        it++;
    }
    
    it = nums1.begin();
    while (it != nums1.end()) {
        *it = 0;
        it++;
    }
    display(nums1);
}

void test3() {
    std::cout << "\n----------------------------" << std::endl;
    std::vector<int> nums1 {1,2,3,4,5};
    
    std::vector<int>::const_iterator it = nums1.begin();
    while (it != nums1.end()) {
//        *it = 0; // compiler error
        std::cout << *it << std::endl;
        it++;
    }
}

void test4() {
    std::vector<int> vec {1,2,3,4};
    auto it1 = vec.rbegin(); // reverse iterator starts at 4
    while (it1 != vec.rend()) {
        std::cout << *it1 << std::endl;
        it1++;
    }
    
    // iterate over a list
    std::list<std::string> name {"Miranda", "Samantha", "Charlotte"};
    auto it2 = name.crbegin(); // constant reverse
    std::cout << *it2 << std::endl;
    it2++;
    std::cout << *it2 << std::endl;
    
    // iterate over a map
    std::map<std::string, std::string> favorites {
        {"Carrie", "C++"},
        {"Charlotte", "Python"},
        {"Samantha", "Java"}
    };
    auto it3 = favorites.begin();
    while (it3 != favorites.end()) {
        std::cout << it3->first << " - " << it3->second << std::endl;
        it3++;
    }
}

void test5() {
    // iterate over a subset of a container
    std::vector<int> vec {1,2,3,4,5,6,7,8,9,10};
    auto start = vec.begin()+2;
    auto finish = vec.end()-3;
    
    while (start != finish){
        std::cout << *start << std::endl;
        start++;
    }
}


int main()
{
//    test1();
//    test2();
//    test3();
//    test4();    
    test5();
	std::cout << std::endl;
	return 0;
}
