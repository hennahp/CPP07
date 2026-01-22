#include <iostream>
#include <string>
#include "iter.hpp"

template <typename T>
void printArrayElement(const T &element)
{
    std::cout << element << std::endl;
}

void printInt(int &n)
{
    std::cout << n << std::endl;
}

void doubleFloat(float &f)
{
    f *= 2;
}

void printFloat(const float &f)
{
    std::cout << f << std::endl;
}

void printString(const std::string &s)
{
    std::cout << s << std::endl;
}

int main()
{
    int arrInt[] = {1, 2, 3, 4, 5};
    float arrFloat[] = {1.1f, 2.2f, 3.3f};
    std::string arrString[] = {"Hello", "World", "!"};

    unsigned int lenInt = 5;
    unsigned int lenFloat = 3;
    unsigned int lenString = 3;

    if(lenInt > sizeof(arrInt)/sizeof(arrInt[0]) ||
       lenFloat > sizeof(arrFloat)/sizeof(arrFloat[0]) ||
       lenString > sizeof(arrString)/sizeof(arrString[0]))
    {
        std::cout << RED << "Length exceeds array size" << RESET << std::endl;
        return 1;
    }

    std::cout << BLUE << "Iterating over integer array:" << RESET << std::endl;
    iter(arrInt, lenInt, printInt);
    std::cout << std::endl;

    std::cout << BLUE << "Doubling float array elements:" << RESET << std::endl;
    iter(arrFloat, lenFloat, doubleFloat);
    iter(arrFloat, lenFloat, printFloat);
    std::cout << std::endl;

    std::cout << BLUE << "Iterating over string array:" << RESET << std::endl;
    iter(arrString, lenString, printString);
    std::cout << std::endl;

    std::cout << BLUE << "Testing with NULL array:" << RESET << std::endl;
    iter(static_cast<int*>(NULL), 5, printInt);
    std::cout << std::endl;

    std::cout << BLUE << "Testing with zero length array:" << RESET << std::endl;
    iter(arrInt, 0, printInt);
    std::cout << std::endl;

    std::cout << BLUE << "Testing instantiated template functions:" << RESET << std::endl;
    iter(arrInt, lenInt, printArrayElement<int>);
    std::cout << std::endl;

    return 0;
}