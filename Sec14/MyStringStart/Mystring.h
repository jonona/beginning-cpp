#pragma once
#include <iostream>

class Mystring
{
    friend std::ostream &operator<<(std::ostream &os, const Mystring &rhs);
    friend std::istream &operator>>(std::istream &in, Mystring &rhs);

private:
    char *str; // pointer to a char that holds a C-style string

public:
    Mystring(); // no-args constructor
    Mystring(const char *s); // overloaded constructor
    Mystring(const Mystring &source); // copy constructor
    Mystring(Mystring &&source); // move constructor
    ~Mystring(); // destructor
    
    Mystring &operator=(const Mystring &rhs); // copy assignment
    Mystring &operator=(Mystring &&rhs); // move operator
    
    bool operator==(const Mystring &rhs) const;
    Mystring operator+(const Mystring &rhs) const;
    Mystring operator-() const;
    
    
    
    void display() const;
    int get_length() const;
    const char *get_str() const;
};

