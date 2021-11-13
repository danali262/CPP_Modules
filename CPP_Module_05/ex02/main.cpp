#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main(void)
{
	try
	{
		// ShrubberyCreationForm Shrub("danifile");
		RobotomyRequestForm Robo("Dani");

		Bureaucrat	B("Buzz", 50);
		Bureaucrat	C("Buzzcut", 150);
		Bureaucrat	D("Baas", 1);
		// PresidentialPardonForm A;

		// Shrub.beSigned(B);
		// Shrub.execute(B);
		// Shrub.beSigned(C);
		// Shrub.execute(C);

		Robo.beSigned(B);
		Robo.execute(D);
		// A.execute(B);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what();
	}
	return (0);
}
