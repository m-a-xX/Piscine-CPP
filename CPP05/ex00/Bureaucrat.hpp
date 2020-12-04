#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <stdexcept>

class Bureaucrat
{

	public:

		Bureaucrat();
		Bureaucrat( std::string name, unsigned int grade );
		Bureaucrat( Bureaucrat const & src );
		~Bureaucrat();

		Bureaucrat &		operator=( Bureaucrat const & rhs );

		std::string getName() const;
		unsigned int getGrade() const;
		void incGrade();
		void decGrade();

		class	GradeTooHighException : public std::exception
		{
			const char *what() const throw();
		};
		
		class	GradeTooLowException : public std::exception
		{
			const char *what() const throw();
		};

	private:

		const std::string _name;
		unsigned int _grade;
};

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i );

#endif /* ****************************************************** BUREAUCRAT_H */