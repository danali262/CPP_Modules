#ifndef	SCAVTRAP_HPP
#define	SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(std::string given_name);
		ScavTrap(const ScavTrap	&s);
		ScavTrap &operator=(const ScavTrap &s);

		void	attack(std::string const &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		void	guardGate(void);

		~ScavTrap();
};

#endif
