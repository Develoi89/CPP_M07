#ifndef ARRAY_HPP
# define ARRAY_HPP
#include <stdexcept>

template<typename T>
class Array
{
    private:
        T   _ar;
    public:
        Array();
        Array(unsigned int i);
        Array(Array const &c);
        Array   &operator = (Array const &c);
        T       &operator [] (const int i);

        class ioob: public std::runtime_error
        {
            public:
                ioob();
        };
        int size();

};

#endif