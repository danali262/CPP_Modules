#ifndef	CLAPTRAP_HPP
#define	CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	private:
		std::string		_name;
		unsigned int	_hitpoints;
		unsigned int	_energypoints;
		unsigned int	_attackdamage;
	public:
		ClapTrap();
		ClapTrap(std::string given_name);
		ClapTrap(const ClapTrap	&c);
		ClapTrap &operator=(const ClapTrap &c);

		void	attack(std::string const &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		std::string	getname(void) const;
		unsigned int	gethitpoints
		

		~ClapTrap();
};

#endif
