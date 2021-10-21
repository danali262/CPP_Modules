#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap	a("Eric ClapTrap");
	ScavTrap	b("J.D. Scavinger");

	std::cout << std::endl;
	std::cout << "hitpoins of ClapTrap " << a._name << " are " << a._hitpoints << std::endl;
	std::cout << "hitpoins of ScavTrap " << b._name << " are " << b._hitpoints << std::endl;
	std::cout << std::endl;
	std::cout << "energypoins of ClapTrap " << a._name << " are " << a._energypoints << std::endl;
	std::cout << "energypoins of ScavTrap " << b._name << " are " << b._energypoints << std::endl;
	std::cout << std::endl;
	std::cout << "attackdamage of ClapTrap " << a._name << " are " << a._attackdamage << std::endl;
	std::cout << "attackdamage of ScavTrap " << b._name << " are " << b._attackdamage << std::endl;
	std::cout << std::endl;
	// a.attack("Leny KravTrap");
	// std::cout << std::endl;
	// b.takeDamage(20);
	// std::cout << std::endl;
	return (0);
}
