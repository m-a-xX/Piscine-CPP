#include "easyfind.hpp"

int main()
{
    std::vector<int> array;

    std::cout << "Create the int array {0, 1, 2, 3, 4}\n\n";
    for (int i=0;i<5;i++)
        array.push_back(i);
    std::cout << "Search 2 in the array\n";
    if (!findInt(array, 2))
        std::cout << "The number was not found in the array\n";
    std::cout << "\nSearch 4 in the array\n";
    if (!findInt(array, 4))
        std::cout << "The number was not found in the array\n";
    std::cout << "\nSearch 42 in the array\n";
    if (!findInt(array, 42))
        std::cout << "The number was not found in the array\n";
}