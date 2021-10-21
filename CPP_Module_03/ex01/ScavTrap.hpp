#ifndef	SCAVTRAP_HPP
#define	SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	// private:
	// 	std::string	_name;
	// 	int			_hitpoints;
	// 	int			_energypoints;
	// 	int			_attackdamage;
	public:
		ScavTrap();
		ScavTrap(std::string given_name);
		ScavTrap(const ScavTrap	&s);
		ScavTrap &operator=(const ScavTrap &s);

		// void	attack(std::string const &target);
		// void	takeDamage(unsigned int amount);
		// void	beRepaired(unsigned int amount);

		~ScavTrap();
};

#endif
