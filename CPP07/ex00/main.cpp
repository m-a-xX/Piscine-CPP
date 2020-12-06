#include "whatever.hpp"

template<typename type>
void swap(type &a, type &b)
{
    type tmp = a;
    a = b;
    b = tmp;
}

template<typename type>
type min(type &a, type &b)
{
    if (a < b)
        return a;
    return b;
}

template<typename type>
type max(type &a, type &b)
{
    if (a > b)
        return a;
    return b;
}

int main()
{
    int i1 = 2;
    int i2 = 3;
    float f1 = 2.3f;
    float f2 = 3.6f;
    std::string s1 = "salut";
    std::string s2 = "ca va";
    char c1 = 'c';
    char c2 = 'd';

    std::cout << "Integer test :\ni1 = " << i1 << ", i2 = " << i2 << std::endl;
    std::cout << "Swap values\n";
    ::swap( i1, i2 );
    std::cout << "i1 = " << i1 << ", i2 = " << i2 << std::endl;
    std::cout << "Minimum : " << ::min(i1, i2) << "\n";
    std::cout << "Maximum : " << ::max(i1, i2) << "\n\n";


    std::cout << "Float test :\nf1 = " << f1 << ", f2 = " << f2 << std::endl;
    std::cout << "Swap values\n";
    ::swap( f1, f2 );
    std::cout << "f1 = " << f1 << ", f2 = " << f2 << std::endl;
    std::cout << "Minimum : " << ::min(f1, f2) << "\n";
    std::cout << "Maximum : " << ::max(f1, f2) << "\n\n";


    std::cout << "String test :\ns1 = " << s1 << ", s2 = " << s2 << std::endl;
    std::cout << "Swap values\n";
    ::swap( s1, s2 );
    std::cout << "s1 = " << s1 << ", s2 = " << s2 << std::endl;
    std::cout << "Minimum : " << ::min(s1, s2) << "\n";
    std::cout << "Maximum : " << ::max(s1, s2) << "\n\n";


    std::cout << "Char test :\nc1 = " << c1 << ", c2 = " << c2 << std::endl;
    std::cout << "Swap values\n";
    ::swap( c1, c2 );
    std::cout << "c1 = " << c1 << ", c2 = " << c2 << std::endl;
    std::cout << "Minimum : " << ::min(c1, c2) << "\n";
    std::cout << "Maximum : " << ::max(c1, c2) << "\n\n";

}