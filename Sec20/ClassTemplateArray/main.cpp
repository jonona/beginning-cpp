#include <iostream>
#include <string>
#include <vector>

template <typename T, int N>
class Array {
    int size {N};
    T values[N];
    
    friend std::ostream &operator<<(std::ostream &os, const Array<T,N> &arr){
        os << "[ ";
        for (const auto &val: arr.values)
            os << val << " ";
        os << "]" << std::endl;
        return os;
    }
public:
    Array() = default;
    Array(T init_val) {
        for (auto &item: values)
            item = init_val;
    }
    void fill(T val) {
        for (auto &item: values)
            item = val;
    }
    int get_size() { return size; }
    // overloaded subscript operator
    T &operator[](int index){
        return values[index];
    }
};

int main()
{
    Array<int, 5> nums;
    std::cout << "The size of nums is " << nums.get_size() << std::endl;
    std::cout << nums << std::endl;
    
    nums.fill(10);
    std:: cout << nums << std::endl;
    
    nums[0] = 1000;
    nums[3] = 2000;
    std::cout << nums << std::endl;
    
    Array<int, 20> nums2{1};
    std::cout << "The size of nums2 is " << nums2.get_size() << std::endl;
    std::cout << nums2 << std::endl;
    
    Array<std::string, 10> strings{"Ok"};
    std::cout << "The size of strings is " << strings.get_size() << std::endl;
    std::cout << strings << std::endl;
    
    strings.fill(std::string{"x"});
    std::cout << strings << std::endl;
    
	std::cout <<  std::endl;
	return 0;
}
