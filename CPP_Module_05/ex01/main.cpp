#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	try
	{
		// Form();
		Form 		A ("A1", 50, 2);
		Form 		D ("D1", 50, 2);
		Bureaucrat	B("Buzz", 5);
		Bureaucrat	C("Boz", 100);
		// Form B ("B1", 500, 2);
		// Form C ("C1", 50, -2);
		// Form B (A);
		// Form C;

		// C = A;
		std::cout << A;
		std::cout << D;
		// A.beSigned(B);
		// A.beSigned(C);
		B.signForm(A);
		C.signForm(D);
		std::cout << A;
		std::cout << D;
}
	catch (std::exception &e)
	{
		std::cerr << e.what();
	}
	return (0);
}
