#include "iter.hpp"
#include "Print.hpp"
#include <iostream>

int main()
{
    char *s[4] = {"hola", "que", "tal", "estas?"};
    ::iter(s, 4, ::prnt);
    return 0; 
}