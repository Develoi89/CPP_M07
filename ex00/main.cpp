#include "templates.hpp"
#include <iostream>

int main()
{
    {
    // float a = 12.3;
    // float b = 44.7;
    int a = 42;
    int b = 187;
    // char a = 'j';
    // char b = 'g';

    std::cout << "if A = "<< a <<std::endl;
    std::cout << "if B = "<< b <<std::endl;
    std::cout << "swap f_template change both values and:" << std::endl;
    swap(a, b);
    std::cout << "A: " << a << std::endl;
    std::cout << "B: " << b << std::endl;
    }
    std::cout << std::endl;
    std::cout << std::endl;
    {
    float a = 12.3;
    float b = 44.7;
    // int a = 42;
    // int b = 187;
    // char a = 'j';
    // char b = 'g';
    std::cout << "if A = "<< a <<std::endl;
    std::cout << "if B = "<< b <<std::endl;
    std::cout << "max f_template return value: " << max(a, b) <<std::endl;
    }
    std::cout << std::endl;
    std::cout << std::endl;
    {
    // float a = 12.3;
    // float b = 44.7;
    // int a = 42;
    // int b = 187;
    char a = 'j';
    char b = 'g';
    std::cout << "if A = "<< a <<std::endl;
    std::cout << "if B = "<< b <<std::endl;
    std::cout << "min f_template return value: " << min(a, b) <<std::endl;
    }
    return 0;
}