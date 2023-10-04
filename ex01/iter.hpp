#include <iostream>

template<typename T>
void prnt(T const &t)
{
    std::cout << t << std::endl;
}

template<typename A, typename L, typename F>
void iter(A array, L lenght, F func)
{
    int i = 0;
    while(i < lenght)
        func(array[i++]);
}

