#include "HumanA.hpp"

HumanA::HumanA(std::string given_name, Weapon *given_weapon)
{
	this->_nameA = given_name;
	this->_WeaponA = given_weapon;
}

void	HumanA::attack(void)
{
	std::cout << this->_nameA << " attacks with his " << this->_WeaponA->getType() << std::endl;
}

HumanA::~HumanA(void) {}
