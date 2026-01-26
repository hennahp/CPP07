# include "Array.hpp"
# include "string"

int main()
{
    try
    {
        std::cout << BLUE "Testing default constructor" RESET << std::endl;
        std::cout << BLUE << "----------------------------------------" << RESET << std::endl;
        Array<int> empty;
        std::cout << "Size of empty array: " << empty.size() << std::endl;
        std::cout << std::endl;
        std::cout << BLUE "Testing int array" RESET << std::endl;
        std::cout << BLUE << "----------------------------------------" << RESET << std::endl;
        Array<int> intArray(5);
        for(unsigned int i = 0; i < intArray.size(); i++)
            intArray[i] = i * 10;
        for(unsigned int i =0; i < intArray.size(); i++)
            std::cout << "intArray[" << i << "] = " << intArray[i] << std::endl;
        std::cout << std::endl;
        std::cout << BLUE << "Testing copy constructor" RESET << std::endl;
        std::cout << BLUE << "----------------------------------------" << RESET << std::endl;
        Array<int> copyArray(intArray);
        copyArray[0] = 999;
        std::cout << "original[0]: " << intArray[0] << ", copy[0]: " << copyArray[0] << std::endl;
        std::cout << std::endl;
        std::cout << BLUE << "Testing assignment operator" RESET << std::endl;
        std::cout << BLUE << "----------------------------------------" << RESET << std::endl;
        Array<int> assignArray;
        assignArray = intArray;
        assignArray[1] = 888;
        std::cout << "original[1]: " << intArray[1] << ", assign[1]: " << assignArray[1] << std::endl;
        std::cout << std::endl;
        std::cout << BLUE << "Testing float array" RESET << std::endl;
        std::cout << BLUE << "----------------------------------------" << RESET << std::endl;
        Array<float> floatArray(3);
        for(unsigned int i = 0; i < floatArray.size(); i++)
            floatArray[i] = static_cast<float>(i) + 0.5f;
        for(unsigned int i = 0; i < floatArray.size(); i++)
            std::cout << "floatArray[" << i << "] = " << floatArray[i] << std::endl;    
        std::cout << std::endl;
        std::cout << BLUE << "Testing string array" RESET << std::endl;
        std::cout << BLUE << "----------------------------------------" << RESET << std::endl;
        Array<std::string> stringArray(3);
        stringArray[0] = "Hello";
        stringArray[1] = "42";
        stringArray[2] = "Abu Dhabi";
        for (unsigned int i = 0; i < stringArray.size(); i++)
            std::cout << "stringArray[" << i << "] = " << stringArray[i] << std::endl;
        std::cout << std::endl;
        std::cout << BLUE << "Accessing elements within bounds" RESET << std::endl;
        std::cout << BLUE << "----------------------------------------" << RESET << std::endl;
        std::cout << "Accessing intArray[2]: " << intArray[2] << std::endl;
        std::cout << "Accessing stringArray[1]: " << stringArray[1] << std::endl;
        std::cout << "Accessing copyArray[4]: " << copyArray[4] << std::endl;
        std::cout << std::endl;
        std::cout << BLUE << "Acccessing const array elements" RESET << std::endl;
        std::cout << BLUE << "----------------------------------------" << RESET << std::endl;
        const Array<int> constIntArray = intArray;
        std::cout << "constIntArray[3]: " << constIntArray[3] << std::endl;
        const Array<std::string> constStringArray = stringArray;
        std::cout << "constStringArray[0]: " << constStringArray[0] << std::endl;
        std::cout << std::endl;
        std::cout << BLUE << "Testing out of bounds access" RESET << std::endl;
        std::cout << BLUE << "----------------------------------------" << RESET << std::endl;
        std::cout << "Accessing intArray[10] (out of bounds):"
        << intArray[10] << std::endl;
        
    }
    catch(const std::exception& e)
    {
        std::cerr << RED << "Exception caught: " << e.what() << RESET << std::endl;
    }
    return 0;
}