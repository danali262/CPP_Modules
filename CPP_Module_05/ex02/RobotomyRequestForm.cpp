#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : Form("RobotomyRequestForm", 72, 45)
{
	std::cout << "RobotomyRequestForm with no target was created." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : Form("RobotomyRequestForm", 72, 45) 
{
	std::cout << "RobotomyRequestForm with target " << target << " was created." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &r) : Form("RobotomyRequestForm", 72, 45)
{
	*this = r;
	std::cout << "RobotomyRequestForm was created via Copy Constructor." << std::endl;
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &r)
{
	this->Form::operator=(r);
	std::cout << "RobotomyRequestForm was created via Assignment Operator." << std::endl;
	return (*this);
}

// void	RobotomyRequestForm::createShrubbery(std::string &target) const

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	std::cout << "RobotomyRequestForm was destroyed." << std::endl;
}
