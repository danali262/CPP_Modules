#include "Karen.hpp"

int	main()
{
	Karen	obj;

	obj.complain("DEBUG");
	std::cout << std::endl;
	obj.complain("INFO");
	std::cout << std::endl;
	obj.complain("WARNING");
	std::cout << std::endl;
	obj.complain("ERROR");
	std::cout << std::endl;
	return (0);
}
