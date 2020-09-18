#include <cctype>
#include <deque>
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>


bool is_palindrome(const std::string& s)
{
    std::deque<char> d;
    for (char a: s)
        if (std::isalpha(a))
            d.push_back(a);
    char a1{};
    char a2{};
    
    while (d.size() > 1){
        a1 = d.front();
        a2 = d.back();
        d.pop_front();
        d.pop_back();
        if (a1 != a2)
            return false;
    }
    return true;
}

int main()
{
    std::vector<std::string> test_strings{ "a", "aa", "aba", "abba", "abbcbba", "ab", "abc", "radar", "bob", "ana",
        "avid diva", "Amore, Roma", "A Toyota's a toyota", "A Santa at NASA", "C++",
        "A man, a plan, a cat, a ham, a yak, a yam, a hat, a canal-Panama!", "This is a palindrome", "palindrome" };
   
    std::cout << std::boolalpha;
    std::cout << std::setw(15) << std::left << "Result" << "String" << std::endl;
    for(const auto& s : test_strings) {
        std::cout << std::setw(15) << std::left << is_palindrome(s) 
                << std::setw(70) << std::right << s << std::endl;
    }
    std::cout << std::endl;
    return 0;
}