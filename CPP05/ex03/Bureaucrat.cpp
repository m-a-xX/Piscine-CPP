#include "Bureaucrat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Bureaucrat::Bureaucrat() : _name("Default Bureaucrat")
{
	_grade = 150;
}

Bureaucrat::Bureaucrat( std::string name, unsigned int grade ) : _name(name)
{
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
	_grade = grade;
}

Bureaucrat::Bureaucrat( const Bureaucrat & src ) : _name(src._name)
{
	_grade = src._grade;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Bureaucrat::~Bureaucrat()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Bureaucrat &				Bureaucrat::operator=( Bureaucrat const & rhs )
{
	_grade = rhs._grade;
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i )
{
	o << i.getName() << ", bureaucrat grade " << i.getGrade() << std::endl;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

std::string Bureaucrat::getName() const
{
	return _name;
}

unsigned int Bureaucrat::getGrade() const
{
	return _grade;
}

void Bureaucrat::incGrade()
{
	if (_grade > 1)
		_grade--;
}

void Bureaucrat::decGrade()
{
	if (_grade < 150)
		_grade++;
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Too high grade";
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Too low grade";
}

void Bureaucrat::signForm(Form &form)
{
	try
	{
		form.beSigned(*this);
		std::cout << getName() << " signs " << form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << getName() << " cant sign " << form.getName() << " because " << e.what() << '\n';
	}
	
}

void Bureaucrat::execute(Form const &form)
{
	try
	{
		form.execute(*this);
		std::cout << getName() << " executs " << form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << getName() << " cant execute " << form.getName() << " because " << e.what() << '\n';
	}
	
}


/* ************************************************************************** */