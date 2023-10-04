#include "Iter.hpp"
#include <iostream>
#include <string>

int main()
{
    char const  *s[4] = {"hola", "que", "tal", "estas?"};
    int const   i[4] = {42, 24, 44, 22};
    char const  c[5] = {'a', 'e', 'i', 'o', 'u'};
    iter(s, 4, prnt<const char*>);
    std::cout << std::endl;
    iter(i, 4, prnt<const int>);
    std::cout << std::endl;
    iter(c, 5, prnt<const char>);
    std::cout << std::endl;
    return 0; 
}