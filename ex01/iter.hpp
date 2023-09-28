#ifndef	ITER_HPP
# define ITER_HPP

template<typename T>
void prnt(T const &t)
{
    std::cout << t << std::endl;
}

template<typename A, typename L, typename F>
void iter(A array, L lenght, F func(T const &))
{
    int i = 0;
    while(i < lenght)
        func(array[i++]);
}

#endif