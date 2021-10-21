#ifndef	CLAPTRAP_HPP
#define	CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	protected:
		std::string		_name;
		unsigned int	_hitPoints;
		unsigned int	_energyPoints;
		unsigned int	_attackDamage;
	public:
		ClapTrap();
		ClapTrap(std::string given_name);
		ClapTrap(const ClapTrap	&c);
		ClapTrap &operator=(const ClapTrap &c);

		void	attack(std::string const &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		std::string		getname(void) const;
		unsigned int	gethitPoints(void) const;
		unsigned int	getenergyPoints(void) const;
		unsigned int	getattackDamage(void) const;

		~ClapTrap();
};

#endif
