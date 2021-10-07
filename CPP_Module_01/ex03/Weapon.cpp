#include "Weapon.hpp"

Weapon::Weapon(void) {}

Weapon::Weapon(std::string given_type)
{
	this->_type = given_type;
}

const std::string	&Weapon::getType(void)
{
	return (this->_type);
}

void	Weapon::setType(std::string given_type)
{
	this->_type = given_type;
}

Weapon::~Weapon(void) {}
