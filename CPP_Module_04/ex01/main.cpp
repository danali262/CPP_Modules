#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int	main(void)
{
	Cat c;
	Cat a(c);
	Cat b;

	b = c;
	std::cout << "Some ideas of A are: " << std::endl;
	a.printBrain();
	std::cout << std::endl;
	std::cout << "Some ideas of B are: " << std::endl;
	b.printBrain();
	std::cout << std::endl;
	std::cout << "Some ideas of C are: " << std::endl;
	c.printBrain();
	std::cout << std::endl;

	return (0);
}
