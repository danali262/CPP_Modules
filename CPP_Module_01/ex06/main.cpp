#include "Karen.hpp"

int	main(int argc, char **argv)
{
	Karen	obj;

	if (argc != 2)
	{
		std::cout << "Please provide the correct number of arguments." << std::endl;
		return (1);
	}
	obj.complain(argv[1]);
	return (0);
}
