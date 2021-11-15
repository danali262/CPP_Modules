#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern(void)
{
	// std::cout << "Intern was created." << std::endl;
}

Intern::Intern(const Intern &i)
{
	*this = i;
	std::cout << "Intern was created via Copy Constructor." << std::endl;
}

Intern	&Intern::operator=(const Intern &)
{
	std::cout << "Intern was created via Assignment Operator." << std::endl;
	return(*this);
}

Form	*Intern::makeForm(std::string formName, std::string formTarget)
{
	std::string	formNames[3] = {"Shrubbery Create", "Robotomy Request", "Presidential Pardon"};

	Form	*(*forms[3])(std::string const &target) = {
		&ShrubberyCreationForm::create,
		&RobotomyRequestForm::create,
		&PresidentialPardonForm::create
	};

	int	idx;

	idx = 0;
	while (idx < 3)
	{
		if (formNames[idx] == formName)
		{
			std::cout << "Intern creates " << formName << std::endl;
			return forms[idx](formTarget);	
		}
		idx++;
	}
	throw Intern::unknownFormException();
}

Intern::~Intern(void)
{
	// std::cout << "Intern was destroyed." << std::endl;
}
