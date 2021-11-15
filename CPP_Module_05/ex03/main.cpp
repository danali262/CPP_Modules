#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main(void)
{
	try
	{
		Intern	someIntern;
		Form	*example;

		example = someIntern.makeForm("Shrubbery Create", "Dani");
		delete example;
		example = someIntern.makeForm("Robotomy Request", "Dani");
		delete example;
		example = someIntern.makeForm("Presidential Pardon", "Dani");
		delete example;
		example = someIntern.makeForm("Tiramisu Maker", "Dani");
		delete example;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what();
	}
	return (0);
}
