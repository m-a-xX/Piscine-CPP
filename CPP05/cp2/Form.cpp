#include "Form.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Form::Form() : _name("Default form"), _signGrade(150), _execGrade(150)
{
	_isSigned = false;
}

Form::Form(std::string name, unsigned int signGrade, unsigned int execGrade) : _name(name), _signGrade(signGrade), _execGrade(execGrade)
{
	if (_signGrade < 1 || _execGrade < 1)
		throw GradeTooHighException();
	if (_signGrade > 150 || _execGrade > 150)
		throw GradeTooLowException();
	_isSigned = false;
}

Form::Form( const Form & src ) : _name(src._name), _signGrade(src._signGrade), _execGrade(src._execGrade)
{
	_isSigned = src._isSigned;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Form::~Form()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Form &				Form::operator=( Form const & rhs )
{
	_isSigned = rhs.isSigned();
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Form const & i )
{
	o << "Form " << i.getName() << " require a grade of " << i.getSignGrade() << " to be sign and a grade of " << i.getExecGrade() << " to be execute\n";
	if (!i.isSigned())
		o << "It is actually unsigned\n";
	else
		o << "It is actually signed\n";
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

std::string Form::getName() const
{
	return _name;
}

bool Form::isSigned() const
{
	return _isSigned;
}

unsigned int Form::getSignGrade() const
{
	return _signGrade;
}

unsigned int Form::getExecGrade() const
{
	return _execGrade;
}

void Form::beSigned(Bureaucrat &bur)
{
	if (bur.getGrade() > _signGrade)
		throw GradeTooLowException();
	if (_isSigned)
		throw AlreadySignedException();
	_isSigned = true;
}

const char *Form::GradeTooHighException::what() const throw()
{
	return "Too high grade";
}

const char *Form::GradeTooLowException::what() const throw()
{
	return "Too low grade";
}

const char *Form::AlreadySignedException::what() const throw()
{
	return "The form is already signed";
}

const char *Form::NotSignedException::what() const throw()
{
	return "The form is not signed";
}


/* ************************************************************************** */