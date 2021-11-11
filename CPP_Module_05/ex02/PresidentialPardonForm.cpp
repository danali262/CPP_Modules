#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : Form("PresidentialPardonForm", 25, 5)
{
	std::cout << "PresidentialPardonForm with no target was created." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : Form("PresidentialPardonForm", 25, 5) 
{
	std::cout << "PresidentialPardonForm with target " << target << " was created." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &p) : Form("PresidentialPardonForm", 25, 5)
{
	*this = p;
	std::cout << "PresidentialPardonForm was created via Copy Constructor." << std::endl;
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm &p)
{
	this->Form::operator=(p);
	std::cout << "PresidentialPardonForm was created via Assignment Operator." << std::endl;
	return (*this);
}

// void	PresidentialPardonForm::createShrubbery(std::string &target) const

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	std::cout << "PresidentialPardonForm was destroyed." << std::endl;
}
