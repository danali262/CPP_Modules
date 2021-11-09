#include "Bureaucrat.hpp"

int	main(void)
{
	try
	{
		// Bureaucrat();
		// Bureaucrat A ("Buzz", 2);
		Bureaucrat A ("Buzz", -2);
		// Bureaucrat B (A);
		// Bureaucrat C;

		// C = A;
	}
	catch (int)
	{
		std::cerr << "Oops." << std::endl;
	}
	return (0);
}
