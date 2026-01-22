#ifndef ITER_HPP
#define ITER_HPP
#include <iostream>

#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define RESET "\033[0m"

template <typename T>
void iter(T *array, const unsigned int length, void (*func)(T&))
{
    if(array == NULL)
    {
        std::cout << RED << "Array is NULL" << RESET << std::endl;
        return;
    } 
    for(unsigned int i = 0; i < length; i++)
    {   
        func(array[i]);
    }
}

template <typename T>
void iter(const T *array, const unsigned int length, void (*func)(const T&))
{
    if(array == NULL)
    {
        std::cout << RED << "Array is NULL" << RESET << std::endl;
        return;
    }
    for(unsigned int i = 0; i < length; i++)
    {
        func(array[i]);
    }
}
#endif