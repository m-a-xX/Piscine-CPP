#include "iter.hpp"

template<typename arrayType, typename funcType>
void iter(arrayType array, size_t len, funcType func)
{
    for (unsigned int i=0;i<len;i++)
        func(array[i]);
}

void putChar(char c)
{
    std::cout << c << std::endl;
}

void putInt(int i)
{
    std::cout << i << std::endl;
}

int main()
{
    int intArray[] = {1, 2, 3, 4, 5};
    std::string string = "salut";
    char str[] = "salut";

    std::cout << "\nExecution of putInt() on every element of the int array {1, 2, 3, 4, 5}\n";
    iter(intArray, 5, putInt);
    
    std::cout << "\nExecution of putChar() on every element of the string \"salut\"\n";
    iter(string, 5, putChar);
    
    std::cout << "\nExecution of putChar() on every element of the char array \"salut\"\n";
    iter(str, 5, putChar);
}