#ifndef	DIAMONDTRAP_HPP
#define	DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
		std::string _name;
	public:
		DiamondTrap();
		DiamondTrap(std::string given_name);
		DiamondTrap(const DiamondTrap	&d);
		DiamondTrap &operator=(const DiamondTrap &d);

		void	attack(std::string const &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		void	guardGate(void);
		void	highFivesGuys(void);
		void	whoAmI(void);

		~DiamondTrap();
};

#endif
