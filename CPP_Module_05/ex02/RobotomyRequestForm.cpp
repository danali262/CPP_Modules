#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : Form("RobotomyRequestForm", 72, 45)
{
	this->f_target = "";
	std::cout << "RobotomyRequestForm with no target was created." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : Form("RobotomyRequestForm", 72, 45) 
{
	this->f_target = target;
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

void	RobotomyRequestForm::execute(Bureaucrat const &executor)
{
	this->Form::execute(executor);
	this->action();
}

void	RobotomyRequestForm::action(void)
{
	int	chance;

	srand(time(0));
	std::cout << "BRRRRRRR . . . " << std::endl;
	chance = rand() % 100;
	if (chance > 50)
		std::cout << this->f_target << " has been robotomized successfully." << std::endl;
	else
		std::cout << this->f_target << " has failed to be robotomized." << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	std::cout << "RobotomyRequestForm was destroyed." << std::endl;
}
