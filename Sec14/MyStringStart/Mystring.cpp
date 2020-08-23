#include "Mystring.h"
#include <cstring>
#include <iostream>

Mystring::Mystring()
    :str{nullptr}{
    str = new char[1];
    *str = '\0';
}

Mystring::Mystring(const char *s)
    :str{nullptr}{
    if (s==nullptr){
        str = new char[1];
        *str = '\0';
    } else {
        str = new char[std::strlen(s)+1];
        std::strcpy(str,s);
    }
}

// Copy constructor
Mystring::Mystring(const Mystring &source)
    :str{nullptr}{
    std::cout << "Copy constructor" << std::endl;
    str = new char[std::strlen(source.str)+1];
    std::strcpy(str, source.str);
}

// Move constructor
Mystring::Mystring(Mystring &&source)
    :str{source.str}{
    std::cout << "Move constructor" << std::endl;
    source.str = nullptr;
}

Mystring::~Mystring()
{   delete [] str;
}



void Mystring::display() const {
    std::cout << str << " : " << get_length() << std::endl;
}

int Mystring::get_length() const {
    return std::strlen(str);
}

const char *Mystring::get_str() const {
    return str;
}



// Copy assignment
Mystring &Mystring::operator=(const Mystring &rhs){
    std::cout << "Copy assignment" << std::endl;
    if (this == &rhs)
        return *this;
    delete [] str;
    str = new char[std::strlen(rhs.str) + 1];
    std::strcpy(this->str, rhs.str);
    return *this;
}

// Move assignment
Mystring &Mystring::operator=(Mystring &&rhs){
    std::cout << "Move assignment" << std::endl;
    if (this == &rhs)
        return *this;
    delete [] str; // deallocate current pointer
    str = rhs.str; // steal the poiner
    rhs.str = nullptr; // null out  the rhs object
    return *this;
}



// Equality
bool Mystring::operator==(const Mystring &rhs) const {
    if (std::strcmp(str, rhs.str) == 0)
        return true;
    else
        return false;
}

// Concatenate
Mystring Mystring::operator+(const Mystring &rhs) const {
    size_t buff_size = std::strlen(str) + std::strlen(rhs.str) +1;
    char *buff = new char[buff_size];
    std::strcpy(buff, str);
    std::strcat(buff, rhs.str);
    Mystring temp {buff};
    delete [] buff;
    return temp;
}

// Make lowercase
Mystring Mystring::operator-() const {
    char * buff = new char [std::strlen(str) + 1];
    std::strcpy(buff,str);
    for (size_t i=0; i<std::strlen(buff); i++)
        buff[i] = std::tolower(buff[i]);
    Mystring temp {buff};
    delete [] buff;
    return temp;
}



// Insertion operator
std::ostream &operator<<(std::ostream &os, const Mystring &rhs){
    os << rhs.str;
    return os;
}

// Extraction operator
std::istream &operator>>(std::istream &in, Mystring &rhs){
    char *buff = new char [1000];
    in >> buff;
    rhs = Mystring{buff};
    delete [] buff;
    return in;
}