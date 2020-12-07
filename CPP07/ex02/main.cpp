#include "Array.hpp"


template<typename type>
void printArray(Array<type> a)
{
    if (!a.size())
        return;
    for (unsigned int i=0;i<a.size();i++)
        std::cout << a[i] << " ";
    std::cout << "\n";
}

int main()
{
    Array<int> empty;
    Array<int> intArray(5);
    Array<char> charArray(5);

    std::cout << "Print the new int array of size 5 :\n";
    printArray(intArray);
    std::cout << "Print the new char array of size 5 (\\0 will not appear) :\n";
    printArray(charArray);
    std::cout << "Print the the third element of the int array :\n";
    std::cout << intArray[2];
    std::cout << "\nPrint the the first element of the char array converted to int :\n";
    std::cout << (int)charArray[0];
    std::cout << "\nPrint a non existent element of the int array :\n";
    try
    {
        std::cout << intArray[5];
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}