#include "Array.hpp"

template<typename T>
Array<T>::ioob::ioob(): std::runtime_error("index is out of bounds."){}

template<typename T>
Array<T>::Array()
{
}

template<typename T>
Array<T>::Array(unsigned int i)
{
}

template<typename T>
Array<T>  & Array<T>::operator = (Array const &c)
{
}

template<typename T>
T       & Array<T>::operator [] (const int i)
{
    if (i < 0 || i >= this.size())
        throw ioob();
    return *this->_ar[i];
}

template<typename T>
int Array<T>::size()
{
    int i = 0;
    while(this._ar[i])
        i++;
    return i;
}
