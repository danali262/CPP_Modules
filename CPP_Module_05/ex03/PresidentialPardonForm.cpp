#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : Form("PresidentialPardonForm", 25, 5)
{
	this->f_target = "";
	// std::cout << "PresidentialPardonForm with no target was created." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : Form("PresidentialPardonForm", 25, 5) 
{
	this->f_target = target;
	// std::cout << "PresidentialPardonForm with target " << target << " was created." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &p) : Form("PresidentialPardonForm", 25, 5)
{
	*this = p;
	// std::cout << "PresidentialPardonForm was created via Copy Constructor." << std::endl;
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm &p)
{
	this->Form::operator=(p);
	// std::cout << "PresidentialPardonForm was created via Assignment Operator." << std::endl;
	return (*this);
}

void	PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	this->Form::execute(executor);
	this->action();
}

void	PresidentialPardonForm::action(void) const
{
	std::cout << this->f_target << " has been pardoned by Zafod Beeblebrox." << std::endl;
}

Form	*PresidentialPardonForm::create(const std::string &target)
{
	return new 	PresidentialPardonForm(target);
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	// std::cout << "PresidentialPardonForm was destroyed." << std::endl;
}
