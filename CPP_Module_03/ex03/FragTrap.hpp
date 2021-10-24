#ifndef	FRAGTRAP_HPP
#define	FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public:
		FragTrap();
		FragTrap(std::string given_name);
		FragTrap(const FragTrap	&f);
		FragTrap &operator=(const FragTrap &f);

		void	attack(std::string const &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		void	highFivesGuys(void);

		~FragTrap();
};

#endif
