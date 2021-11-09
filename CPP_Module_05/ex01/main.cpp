#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	try
	{
		// Form();
		Form A ("A1", 50, 2);
		Form B (A);
		Form C;

		C = A;
}
	catch (std::exception &e)
	{
		std::cerr << e.what();
	}
	return (0);
}
