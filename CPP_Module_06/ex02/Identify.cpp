#include "Identify.hpp"

Base	*generate(void)
{
	int	chance;

	// srand(time(0));
	chance = rand() % 3;
	if (chance == 0)
		return(new A());
	else if (chance == 1)
		return(new B());
	else
		return(new C());	
}

void	identify(Base *p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "The derived class of the pointer is A." << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "The derived class of the pointer is B." << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "The derived class of the pointer is C." << std::endl;
}

void	identify(Base &p)
{
	if (dynamic_cast<A*>(&p))
		std::cout << "The derived class of the pointer is A." << std::endl;
	else if (dynamic_cast<B*>(&p))
		std::cout << "The derived class of the pointer is B." << std::endl;
	else if (dynamic_cast<C*>(&p))
		std::cout << "The derived class of the pointer is C." << std::endl;
}
