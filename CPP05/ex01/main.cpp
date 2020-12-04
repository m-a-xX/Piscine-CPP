#include "Bureaucrat.hpp"
#include "Form.hpp"

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
    Form form1("form1", 1, 1);
    Form form150("form150", 150, 150);
	try
	{
		form1.beSigned(last);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	last.signForm(form1);
	chief.signForm(form1);
	last.signForm(form150);
}