#include "whatever.hpp"

int	main()
{
	// {
	// 	int	x;
	// 	int	y;
	// 	int i_min;
	// 	int i_max;

	// 	float z;
	// 	float a;
	// 	float f_min;
	// 	float f_max;

	// 	x = 7;
	// 	y = 12;

	// 	std::cout << "x before swap: " << x << std::endl;
	// 	std::cout << "y before swap: " << y << std::endl;
	// 	swap<int>(x,y);
	// 	std::cout << std::endl;
	// 	std::cout << "x after swap: " << x << std::endl;
	// 	std::cout << "y after swap: " << y << std::endl;
	// 	std::cout << std::endl;
	// 	i_min = min<int>(x,y);
	// 	std::cout << "The min of the two is: " << i_min << std::endl;
	// 	i_max = max<int>(x,y);
	// 	std::cout << "The max of the two is: " << i_max << std::endl;
	// 	std::cout << std::endl;

	// 	z = 0.01;
	// 	a = 42.7f;

	// 	std::cout << "z before swap: " << z << std::endl;
	// 	std::cout << "a before swap: " << a << std::endl;
	// 	swap<float>(z,a);
	// 	std::cout << std::endl;
	// 	std::cout << "z after swap: " << z << std::endl;
	// 	std::cout << "a after swap: " << a << std::endl;
	// 	std::cout << std::endl;
	// 	f_min = min<float>(z,a);
	// 	std::cout << "The min of the two is: " << f_min << std::endl;
	// 	f_max = max<float>(z,a);
	// 	std::cout << "The max of the two is: " << f_max << std::endl;
	// 	std::cout << std::endl;
	// }

	{
		int a = 2;
		int b = 3;

		::swap(a, b);
		std::cout << "a = " << a << " , b = " << b << std::endl;
		std::cout << "min(a, b) = " << ::min(a, b) << std::endl;
		std::cout << "max(a, b) = " << ::max(a, b) << std::endl;

		std::string	c = "chaine1";
		std::string	d = "chaine2";

		::swap(c, d);
		std::cout << "c = " << c << ", d = " << d << std::endl;
		std::cout << "min(c, d) = " << ::min(c, d) << std::endl;
		std::cout << "max(c, d) = " << ::max(c, d) << std::endl;

	}

	return (0);
}
