#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form("ShrubberyCreationForm", 145, 137)
{
	std::cout << "ShrubberyCreationForm with no target was created." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : Form("ShrubberyCreationForm", 145, 137) 
{
	std::cout << "ShrubberyCreationForm with target " << target << " was created." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &s) : Form("ShrubberyCreationForm", 145, 137)
{
	*this = s;
	std::cout << "ShrubberyCreationForm was created via Copy Constructor." << std::endl;
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &s)
{
	this->Form::operator=(s);
	std::cout << "ShrubberyCreationForm was created via Assignment Operator." << std::endl;
	return (*this);
}

// void	ShrubberyCreationForm::createShrubbery(std::string &target) const

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	std::cout << "ShrubberyCreationForm was destroyed." << std::endl;
}
