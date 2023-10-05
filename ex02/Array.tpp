#include "Array.hpp"

template<typename T>
Array<T>::ioob::ioob(): std::runtime_error("index is out of bounds."){}

template<typename T>
Array<T>::Array(): _s(0)
{
}

template<typename T>
const int Array<T>::size()
{
    return _s;
}

template<typename T>
Array<T>::Array(unsigned int i): _ar(new T[i]), _s(i)
{
}

template<typename T>
Array<T>::Array(const Array<T> &c): _ar(new T[c._s]), _s(c._s)
{
}

template<typename T>
Array<T>  & Array<T>::operator = (const Array<T> &c)
{
    if(_ar)
        delete _ar;
    _ar = new T[c._s];
    _s = c._s;
    return *this;
}

template<typename T>
T       & Array<T>::operator [] (const int i)
{
    if (i < 0 || i >= _s)
        throw ioob();
    return this->_ar[i];
}

template<typename T>
Array<T>::~Array()
{
    delete _ar;
}
