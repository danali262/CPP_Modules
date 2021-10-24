#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	ClapTrap	a("Eric ClapTrap");
	ScavTrap	b("J.D. Scavinger");
	FragTrap	c("Frag Sinatra");

	std::cout << std::endl;
	std::cout << "hitpoins of ClapTrap " << a.getname() << " are " << a.gethitPoints() << std::endl;
	std::cout << "hitpoins of ScavTrap " << b.getname() << " are " << b.gethitPoints() << std::endl;
	std::cout << "hitpoins of FragTrap " << c.getname() << " are " << c.gethitPoints() << std::endl;
	std::cout << std::endl;
	std::cout << "energypoins of ClapTrap " << a.getname() << " are " << a.getenergyPoints() << std::endl;
	std::cout << "energypoins of ScavTrap " << b.getname() << " are " << b.getenergyPoints() << std::endl;
	std::cout << "energypoins of FragTrap " << c.getname() << " are " << c.getenergyPoints() << std::endl;
	std::cout << std::endl;
	std::cout << "attackdamage of ClapTrap " << a.getname() << " are " << a.getattackDamage() << std::endl;
	std::cout << "attackdamage of ScavTrap " << b.getname() << " are " << b.getattackDamage() << std::endl;
	std::cout << "attackdamage of FragTrap " << c.getname() << " are " << c.getattackDamage() << std::endl;
	std::cout << std::endl;
	a.attack(c.getname());
	b.attack(a.getname());
	c.attack(b.getname());
	std::cout << std::endl;
	a.takeDamage(b.getattackDamage());
	b.takeDamage(c.getattackDamage());
	c.takeDamage(a.getattackDamage());
	std::cout << std::endl;
	a.beRepaired(5);
	b.beRepaired(20);
	c.beRepaired(10);
	std::cout << std::endl;
	b.guardGate();
	c.highFivesGuys();
	std::cout << std::endl;
	std::cout << "hitpoins of ClapTrap " << a.getname() << " are " << a.gethitPoints() << std::endl;
	std::cout << "hitpoins of ScavTrap " << b.getname() << " are " << b.gethitPoints() << std::endl;
	std::cout << "hitpoins of FragTrap " << c.getname() << " are " << c.gethitPoints() << std::endl;
	std::cout << std::endl;
	std::cout << "energypoins of ClapTrap " << a.getname() << " are " << a.getenergyPoints() << std::endl;
	std::cout << "energypoins of ScavTrap " << b.getname() << " are " << b.getenergyPoints() << std::endl;
	std::cout << "energypoins of FragTrap " << c.getname() << " are " << c.getenergyPoints() << std::endl;
	std::cout << std::endl;
	std::cout << "attackdamage of ClapTrap " << a.getname() << " are " << a.getattackDamage() << std::endl;
	std::cout << "attackdamage of ScavTrap " << b.getname() << " are " << b.getattackDamage() << std::endl;
	std::cout << "attackdamage of FragTrap " << c.getname() << " are " << c.getattackDamage() << std::endl;
	std::cout << std::endl;
	return (0);
}
