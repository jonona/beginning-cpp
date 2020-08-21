#include <iostream>

int main()
{
    int fav_number;
    std::cout << "Enter your fav number between 1 and 100: ";
    std::cin >> fav_number;
    std::cout << "Amazing, mine too." << std::endl << "No, really. " << fav_number << " is my fav number." << std::endl;
    return 0;
}