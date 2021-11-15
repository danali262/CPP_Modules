#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form("ShrubberyCreationForm", 145, 137)
{
	this->f_target = "";
	// std::cout << "ShrubberyCreationForm with no target was created." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : Form("ShrubberyCreationForm", 145, 137) 
{
	this->f_target = target;
	// std::cout << "ShrubberyCreationForm with target " << target << " was created." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &s) : Form("ShrubberyCreationForm", 145, 137)
{
	*this = s;
	// std::cout << "ShrubberyCreationForm was created via Copy Constructor." << std::endl;
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &s)
{
	this->Form::operator=(s);
	// std::cout << "ShrubberyCreationForm was created via Assignment Operator." << std::endl;
	return (*this);
}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	this->Form::execute(executor);
	this->action();
}

void	ShrubberyCreationForm::action(void) const
{
	std::string file_name;
	file_name = this->f_target + "_shrubbery"; 

	std::ofstream outf(file_name.c_str());
	if (!outf)
		std::cerr << "File could not be opened for writing." << std::endl;

	outf <<      
		"					ccee88oo               " << std::endl <<
		"				    C8O8O8Q8PoOb o8oo          " << std::endl <<
		"				   dOB69QO8PdUOpugoO9bD        " << std::endl <<
		"				 CgggbU8OU qOp qOdoUOdcb       " << std::endl <<
		"				   6OuU  /p u gcoUodpP         " << std::endl <<
		"					\\/  /douUP              " << std::endl <<
		"					 \\///                   " << std::endl <<
		"					 |||                    " << std::endl <<
		" 					 |||                    " << std::endl <<
		"					 |||                    " << std::endl <<
		"				     ....|||....                " << std::endl;
}

Form	*ShrubberyCreationForm::create(const std::string &target)
{
	return new ShrubberyCreationForm(target);
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	// std::cout << "ShrubberyCreationForm was destroyed." << std::endl;
}
