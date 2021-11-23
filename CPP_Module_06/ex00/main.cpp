#include "Scalar.hpp"

int	main(int argc, char **argv)
{
	std::string test;

	if (argc != 2)
	{
		std::cout << "Please provide one argument." << std::endl;
		return (1);
	}
	Scalar	A(argv[1]);
	// Scalar	B(A);
	// Scalar	C;

	// C = B;

	std::cout << A;

	return (0);
}
