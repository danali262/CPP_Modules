#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main(void)
{
	try
	{
		ShrubberyCreationForm Shrub("danifile");
		RobotomyRequestForm Robo("Dani");
		PresidentialPardonForm Pres("Dani");

		Bureaucrat	B("Buzz", 50);
		Bureaucrat	C("Buzzcut", 150);
		Bureaucrat	D("Baas", 1);

		B.signForm(Shrub);
		B.executeForm(Shrub);
		std::cout << std::endl;
		C.signForm(Shrub);
		C.executeForm(Shrub);
		std::cout << std::endl;
		D.signForm(Shrub);
		D.executeForm(Shrub);
		std::cout << std::endl;

		B.signForm(Robo);
		B.executeForm(Robo);
		std::cout << std::endl;
		C.signForm(Robo);
		C.executeForm(Robo);
		std::cout << std::endl;
		D.signForm(Robo);
		D.executeForm(Robo);
		std::cout << std::endl;

		B.signForm(Pres);
		B.executeForm(Pres);
		std::cout << std::endl;
		C.signForm(Pres);
		C.executeForm(Pres);
		std::cout << std::endl;
		D.signForm(Pres);
		D.executeForm(Pres);
		std::cout << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what();
	}
	return (0);
}
