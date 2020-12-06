#include <iostream>
#include <iomanip>
#include <string.h>
#include <limits.h>
#include <math.h>

double isPseudoLitteral(std::string arg)
{
    if (!arg.compare("-inf") || !arg.compare("+inf") || !arg.compare("nan") || !arg.compare("-inff") || !arg.compare("+inff") || !arg.compare("nanf"))
        return 1;
    return 0;
}

char getChar(std::string arg)
{
    if (arg.length() == 1 && arg[0] > 32 && arg[0] < 127)
        return arg[0];
    if (arg.length() == 1)
        return 1;
    return 0;
}

void printChar(char c, double )
{
    if (c == 0)
        std::cout << "char: impossible\n";
    else if (c == -1)
        std::cout << "char: Non displayable\n";
    else
        std::cout << "char: " << c << "\n";
}

void printInt(char c, double d)
{
    int i;

    if (c < 2)
        i = static_cast<int>(d);
    else
        i = static_cast<int>(c);
    if (i < INT_MAX && i > INT_MIN)
        std::cout << "int: " << i << "\n";
    else
        std::cout << "int: impossible\n";
}

void printFloat(char c, double d)
{
    float f = static_cast<float>(d);

    if (c < 3)
        f = static_cast<float>(d);
    else
        f = static_cast<float>(c);
    if ((f < __FLT_MAX__ && f > __FLT_MIN__) || (int)c == 2)
        std::cout << "float: " << std::fixed << std::setprecision(1) << f << "f\n";
    else
        std::cout << "float: impossible\n";
}

void printDouble(char c, double d)
{
    if (c < 3)
        std::cout << "double: " << std::fixed << std::setprecision(1) << d << "\n";
    else
        std::cout << "double: " << static_cast<double>(c) << "\n";
}

void convert(std::string arg)
{
    char c = getChar(arg);
    double d = -1;

    if ((int)(c) < 2)
    {
        try
        {
             d = std::stod(arg);
        }
        catch(const std::exception& e)
        {
            std::cout << "char: impossible\n";
            std::cout << "int: impossible\n";
            std::cout << "float: impossible\n";
            std::cout << "double: impossible\n";
            return;
        }
    }
    if (isPseudoLitteral(arg))
    {
        std::cout << "char: impossible\n";
        std::cout << "int: impossible\n";
        printFloat((char)2, d);
        printDouble((char)2, d);
        return;
    }
    printChar(c, d);
    printInt(c, d);    
    printFloat(c, d);
    printDouble(c, d);    
}

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cout << "Pass a string to convert in argument\n";
        return 0;
    }
    convert(av[1]);
}