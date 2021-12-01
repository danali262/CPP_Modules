#include "Identify.hpp"

int	main()
{
	Base	*ptr;
	int		i;

	srand(time(0));
	for (i = 0; i < 10; i++)
	{
		ptr = generate();
		std::cout << std::endl;
		identify(ptr);
		identify(*ptr);
		std::cout << std::endl;
		delete ptr;
	}
	return (0);
}
