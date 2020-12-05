#include "ShrubberyCreationForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ShrubberyCreationForm::ShrubberyCreationForm() : Form("(null)", 145, 137)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form(target, 145, 137)
{
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ShrubberyCreationForm &				ShrubberyCreationForm::operator=( ShrubberyCreationForm const & )
{
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (!isSigned())
		throw NotSignedException();
	if (executor.getGrade() > getExecGrade())
		throw GradeTooLowException();
	const char*	trees_lines[] = {
	"    *        *        *    \n",
	"   ***      ***      ***   \n",
	"  *****    *****    *****  \n",
	" *******  *******  ******* \n",
	"    #        #        #    \n",
	NULL
	};
	int	len = (int)(getName().length()) + 11;
	char filename[len];
	for (int i=0;i<len-11;i++)
		filename[i] = getName()[i];
	for (int i=len-11;i<len;i++)
		filename[i] = "_shruberry"[i - (len - 11)];
	filename[len - 1] = 0;
	std::ofstream outfile (filename);
	for(int i=0;trees_lines[i];i++)
		outfile << trees_lines[i];
	outfile.close();
}


/* ************************************************************************** */