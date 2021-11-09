#include "Bureaucrat.hpp"

int	main(void)
{
	try
	{
		// Bureaucrat();
		Bureaucrat A ("Buzz", 2);
		// Bureaucrat A ("Buzz", -2);
		// Bureaucrat A ("Buzz", 200);
		// Bureaucrat B (A);
		Bureaucrat B ("Bazz", 1);
		// Bureaucrat C;
		Bureaucrat C ("Bozz", 150);

		// C = A;
		A.incrementGrade();
		A.decrementGrade();
		// B.incrementGrade();
		B.decrementGrade();
		C.incrementGrade();
		C.decrementGrade();
	}
	catch (std::exception &e)
	{
		std::cerr << e.what();
	}
	return (0);
}
