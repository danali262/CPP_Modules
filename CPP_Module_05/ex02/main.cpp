#include "ShrubberyCreationForm.hpp"

int	main(void)
{
	try
	{
		ShrubberyCreationForm A;
		ShrubberyCreationForm B(A);
		ShrubberyCreationForm C;

		C = A;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what();
	}
	return (0);
}
