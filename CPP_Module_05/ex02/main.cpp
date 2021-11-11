#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main(void)
{
	try
	{
		// ShrubberyCreationForm A;
		// ShrubberyCreationForm B(A);
		// ShrubberyCreationForm C;
		// ShrubberyCreationForm D("home");
		// RobotomyRequestForm A;
		// RobotomyRequestForm B(A);
		// RobotomyRequestForm C;
		// RobotomyRequestForm D("home");
		PresidentialPardonForm A;
		PresidentialPardonForm B(A);
		PresidentialPardonForm C;
		PresidentialPardonForm D("home");

		C = A;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what();
	}
	return (0);
}
