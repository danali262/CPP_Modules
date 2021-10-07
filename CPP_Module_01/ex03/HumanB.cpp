#include "HumanB.hpp"

HumanB::HumanB(std::string given_name)
{
	this->_nameB = given_name;
}

void	HumanB::attack(void)
{
	std::cout << this->_nameB << " attacks with his " << this->_WeaponB->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon *given_weapon)
{
	this->_WeaponB = given_weapon;
}

HumanB::~HumanB(void) {}
