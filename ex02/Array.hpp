#ifndef ARRAY_HPP
# define ARRAY_HPP
#include <stdexcept>

template<typename T>
class Array
{
    private:
        T   *_ar;
        unsigned int _s;
    public:
        Array();
        Array(unsigned int i);
        Array(const Array<T> &c);
        Array   &operator = (const Array<T> &c);
        T       &operator [] (const int i);

        const int size();
        class ioob: public std::runtime_error
        {
            public:
                ioob();
        };
        ~Array();
};

#endif