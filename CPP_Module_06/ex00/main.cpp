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
	char	c;
	int		n;
	float	f;
	double	d;

	c = A.toChar();
	std::cout << "char: " << c << std::endl;
	n = A.toInt();
	std::cout << "int: " << n << std::endl;
	f = A.toFloat();
	std::cout << "float: " << f << std::endl;
	d = A.toDouble();
	std::cout << "double: " << d << std::endl;

	return (0);
}
