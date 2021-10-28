#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int	main(void)
{
	Animal	*pack[10];
	int		i;

	std::cout << "Checking the correct construction of the Array: " << std::endl;
	for (i = 0; i < 5; i++)
	{
		std::cout << i << std::endl;
		pack[i] = new Dog();
	}
	for (i = 5; i < 10; i++)
	{
		std::cout << i << std::endl;
		pack[i] = new Cat();
	}
	std::cout << std::endl;

	std::cout << "Checking the correct destruction of the Array: " << std::endl;
	for (i = 0; i < 10; i++)
	{
		std::cout << i << std::endl;
		delete pack[i];
	}
	std::cout << std::endl;

	std::cout << "Checking the deep copy: " << std::endl;
	Dog	a;
	Dog b(a);
	Cat	c;
	Cat d;

	d = c;
	std::cout << std::endl;
	a.printBrainIdeas();
	std::cout << std::endl;
	b.printBrainIdeas();
	std::cout << std::endl;
	c.printBrainIdeas();
	std::cout << std::endl;
	d.printBrainIdeas();
	std::cout << std::endl;

	return (0);
}
