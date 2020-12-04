#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat chief("chief", 1);
    Bureaucrat last;
	try
	{
		last = Bureaucrat("Default", 150);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Bureaucrat low("low", 200);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Bureaucrat high("high", 0);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
    std::cout << chief << last;
    chief.incGrade();
    chief.incGrade();
    chief.incGrade();
    chief.incGrade();
    chief.decGrade();
    last.incGrade();
    std::cout << chief << last;
}