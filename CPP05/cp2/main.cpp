#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    Bureaucrat chief("chief", 1);
    Bureaucrat last;
    ShrubberyCreationForm form1("form1");
    RobotomyRequestForm form2("form2");
    PresidentialPardonForm form3("form3");
	last.signForm(form1);
	chief.signForm(form1);
	chief.signForm(form1);
	chief.signForm(form2);
	chief.signForm(form3);
	std::cout << std::endl;

	try
	{
		form1.execute(last);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		form1.execute(chief);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;

	try
	{
		form2.execute(last);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	form2.execute(chief);
	std::cout << std::endl;

	try
	{
		form3.execute(last);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	form3.execute(chief);
	std::cout << std::endl;


}