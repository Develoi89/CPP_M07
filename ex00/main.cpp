#include "templates.hpp"
#include <iostream>

int main()
{
    {
    int a = 2;
    int b = 3;
    ::swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
    }
    std::cout << std::endl;
    std::cout << std::endl;
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
