#include "Span.hpp"

int main()
{
    Span sp0 = Span(5);
    Span sp1 = Span(10000);
    Span sp2 = Span(100);

    std::cout << "Try to compare an empty array\n";
    try
    {
        std::cout << sp0.shortestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << "\n\n";
    }
    
    sp0.addNumber(5);
    sp0.addNumber(3);
    sp0.addNumber(17);
    sp0.addNumber(9);
    sp0.addNumber(11);

    std::cout << "Try to add a new int to a full array\n";
    try
    {
        sp0.addNumber(11);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << "\n\n";
    }
    
    std::cout << "First array : {5, 3, 17, 9, 11}\n";
    std::cout << "Shortest span : " << sp0.shortestSpan() << std::endl;
    std::cout << "Longest span : " << sp0.longestSpan() << "\n\n";


    for (int i=0;i<10000;i++)
        sp1.addNumber(i);
    std::cout << "Second array : {0, 1, 2, 3, 4, ..., 9998, 9999}\n";
    std::cout << "Shortest span : " << sp1.shortestSpan() << std::endl;
    std::cout << "Longest span : " << sp1.longestSpan() << "\n\n";

    for (int i=0;i<100;i++)
        sp2.addNumber(rand());
    std::cout << "Third array : 100 random ints\n";
    std::cout << "Shortest span : " << sp2.shortestSpan() << std::endl;
    std::cout << "Longest span : " << sp2.longestSpan() << "\n";
}