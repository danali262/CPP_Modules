#ifndef	CLAPTRAP_HPP
#define	CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	private:
		std::string	_name;
		int			_hitpoints;
		int			_energypoints;
		int			_attackdamage;
	public:
		ClapTrap();
		ClapTrap(std::string given_name);
		ClapTrap(const ClapTrap	&c);
		ClapTrap &operator=(const ClapTrap &c);

		void	attack(std::string const &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		~ClapTrap();
};

#endif
