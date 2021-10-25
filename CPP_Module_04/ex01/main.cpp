#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	const Animal		*meta = new Animal();
	const Animal		*j = new Dog();
	const Animal		*i = new Cat();
	const WrongAnimal	*beta = new WrongAnimal();
	const WrongAnimal	*k = new WrongCat();

	std::cout << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << k->getType() << " " << std::endl;
	std::cout << std::endl;
	i->makeSound(); // will output the cat sound!
	j->makeSound();
	meta->makeSound();
	std::cout << std::endl;
	k->makeSound();		
	beta->makeSound();
	std::cout << std::endl;
	delete meta;
	delete  j;
	delete i;
	delete beta;
	delete k;
	return (0);
}
