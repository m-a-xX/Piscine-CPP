#include "Intern.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Intern::Intern()
{
}

Intern::Intern( const Intern & )
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Intern::~Intern()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Intern &				Intern::operator=( Intern const & )
{
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Intern const & )
{
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void *createShrubbery(std::string target)
{
	return new ShrubberyCreationForm(target);
}

void *createRobotomy(std::string target)
{
	return new RobotomyRequestForm(target);
}

void *createPresidential(std::string target)
{
	return new PresidentialPardonForm(target);
}

Form *Intern::makeForm(std::string form, std::string target)
{
	std::string names[] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	void *(*p[3])(std::string target) = {createShrubbery, createRobotomy, createPresidential};
	int i = 0;
	while (i < 3 && names[i].compare(form))
		i++;
	if (i == 3)
	{
		std::cout << "Unknown form\n";
		return NULL;
	}
	std::cout << "Intern create " << form << "\n";
	Form *ret = (Form *)p[i](target);
	return ret;
}


/* ************************************************************************** */