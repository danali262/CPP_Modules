#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	a("Eric ClapTrap");
	ClapTrap	b(a);
	ClapTrap	c;

	c = a;
	std::cout << std::endl;
	a.attack("Leny KravTrap");
	std::cout << std::endl;
	b.takeDamage(20);
	std::cout << std::endl;
	c.beRepaired(15);
	std::cout << std::endl;
	return (0);
}
