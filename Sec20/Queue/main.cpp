#include <iostream>
#include <queue>

template <typename T>
void display(std::queue<T> q) {
    std::cout << "[ ";
    while (!q.empty()) {
        T elem = q.front();
        q.pop();
        std::cout << elem << " ";
    }
    std::cout << "]" << std::endl;
}

int main()
{
    std::queue<int> q;
    
    for (int i: {1,2,3,4,5})
        q.push(i);
    display(q);
    std::cout << "Front: " << q.front() << std::endl;
    std::cout << "Back: " << q.back() << std::endl;
    
    q.push(100); // pushes back
    display(q);
    
    q.pop(); // pops front
    q.pop();
    
    while (!q.empty())
        q.pop();
    display(q);
    std::cout << "Size: " << q.size() << std::endl;
    
    q.push(10);
    q.push(100);
    q.push(199);
    display(q);
    std::cout << "Front: " << q.front() << std::endl;
    std::cout << "Back: " << q.back() << std::endl;
    
    q.front() = 5;
    q.back() = 500;
    display(q);
    std::cout << "Front: " << q.front() << std::endl;
    std::cout << "Back: " << q.back() << std::endl;
    
	std::cout << std::endl;
	return 0;
}
