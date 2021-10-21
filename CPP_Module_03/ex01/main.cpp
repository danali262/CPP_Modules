#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap	a("Eric ClapTrap");
	ScavTrap	b("J.D. Scavinger");

	std::cout << std::endl;
	std::cout << "hitpoins of ClapTrap " << a.getname() << " are " << a.gethitPoints() << std::endl;
	std::cout << "hitpoins of ScavTrap " << b.getname() << " are " << b.gethitPoints() << std::endl;
	std::cout << std::endl;
	std::cout << "energypoins of ClapTrap " << a.getname() << " are " << a.getenergyPoints() << std::endl;
	std::cout << "energypoins of ScavTrap " << b.getname() << " are " << b.getenergyPoints() << std::endl;
	std::cout << std::endl;
	std::cout << "attackdamage of ClapTrap " << a.getname() << " are " << a.getattackDamage() << std::endl;
	std::cout << "attackdamage of ScavTrap " << b.getname() << " are " << b.getattackDamage() << std::endl;
	std::cout << std::endl;
	a.attack(b.getname());
	b.attack(a.getname());
	std::cout << std::endl;
	a.takeDamage(b.getattackDamage());
	b.takeDamage(a.getattackDamage());
	std::cout << std::endl;
	a.beRepaired(5);
	b.beRepaired(20);
	std::cout << std::endl;
	b.guardGate();
	std::cout << std::endl;
	std::cout << "hitpoins of ClapTrap " << a.getname() << " are " << a.gethitPoints() << std::endl;
	std::cout << "hitpoins of ScavTrap " << b.getname() << " are " << b.gethitPoints() << std::endl;
	std::cout << std::endl;
	std::cout << "energypoins of ClapTrap " << a.getname() << " are " << a.getenergyPoints() << std::endl;
	std::cout << "energypoins of ScavTrap " << b.getname() << " are " << b.getenergyPoints() << std::endl;
	std::cout << std::endl;
	std::cout << "attackdamage of ClapTrap " << a.getname() << " are " << a.getattackDamage() << std::endl;
	std::cout << "attackdamage of ScavTrap " << b.getname() << " are " << b.getattackDamage() << std::endl;
	std::cout << std::endl;
	return (0);
}
