#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
	private:
		Weapon		*_WeaponB;
		std::string	_nameB;
	public:
		HumanB(std::string given_name);
		~HumanB(void);
		void	attack(void);
		void	setWeapon(Weapon *given_weapon);
};

#endif
