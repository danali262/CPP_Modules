#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
	private:
		Weapon		*_WeaponA;
		std::string	_nameA;
	public:
		HumanA(std::string _nameA, Weapon *WeaponA);
		~HumanA(void);
		void	attack(void);
};

#endif
