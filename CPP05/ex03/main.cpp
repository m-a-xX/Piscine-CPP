#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
    Bureaucrat chief("chief", 1);
    Bureaucrat last;
    ShrubberyCreationForm form1("form1");
    RobotomyRequestForm form2("form2");
    PresidentialPardonForm form3("form3");
	Intern  someRandomIntern;
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

	last.execute(form1);
	last.execute(form2);
	last.execute(form3);
	chief.execute(form1);
	chief.execute(form2);
	chief.execute(form3);
	std::cout << std::endl;

	Form*   rrf;
	Form*   scf;
	Form*   ppf;
	Form*   err;
	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	scf = someRandomIntern.makeForm("shrubbery creation", "Sender");
	ppf = someRandomIntern.makeForm("presidential pardon", "Tender");
	err = someRandomIntern.makeForm("fdregergr", "Tender");
	rrf->beSigned(chief);
	rrf->execute(chief);
	scf->beSigned(chief);
	scf->execute(chief);
	ppf->beSigned(chief);
	ppf->execute(chief);
}