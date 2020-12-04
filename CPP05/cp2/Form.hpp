#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"
# include <fstream> 

class Bureaucrat;

class Form
{

	public:

		Form();
		Form(std::string name, unsigned int signGrade, unsigned int execGrade );
		Form( Form const & src );
		~Form();

		Form &		operator=( Form const & rhs );

		std::string getName() const;
		bool isSigned() const;
		unsigned int getSignGrade() const;
		unsigned int getExecGrade() const;

		void beSigned(Bureaucrat &bur);

		virtual void execute(Bureaucrat const & executor) const;

		class	GradeTooHighException : public std::exception
		{
			const char *what() const throw();
		};
		
		class	GradeTooLowException : public std::exception
		{
			const char *what() const throw();
		};

		class	AlreadySignedException : public std::exception
		{
			const char *what() const throw();
		};

		class	NotSignedException : public std::exception
		{
			const char *what() const throw();
		};

	private:

		const std::string _name;
		bool _isSigned;
		const unsigned int _signGrade;
		const unsigned int _execGrade;
};

std::ostream &			operator<<( std::ostream & o, Form const & i );

#endif /* ************************************************************ FORM_H */