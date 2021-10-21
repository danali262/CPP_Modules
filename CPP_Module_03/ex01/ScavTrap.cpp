#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	this->_name = "";
	this->_hitpoints = 100;
	this->_energypoints = 50;
	this->_attackdamage = 20;
	std::cout << "ScavTrap with no name was created." << std::endl;
}

ScavTrap::ScavTrap(std::string given_name)
{
	this->_name = given_name;	
	this->_hitpoints = 100;
	this->_energypoints = 50;
	this->_attackdamage = 20;
	std::cout << "ScavTrap " << this->_name << " was created." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &s)
{
	*this = s;
	std::cout << "ScavTrap " << this->_name << " was created via Copy Constructor." << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &s)
{
	this->_name = s._name;
	this->_hitpoints = s._hitpoints;
	this->_energypoints = s._energypoints;
	this->_attackdamage = s._attackdamage;
	std::cout << "ScavTrap " << this->_name << " was created via Assignment Operator." << std::endl;
	return (*this);
}

// void	ClapTrap::attack(std::string const &target)
// {
// 	std::cout << "ClapTrap " << this->_name << " attacks " << target << " causing " << this->_attackdamage << " points of damage." << std::endl;
// }

// void	ClapTrap::takeDamage(unsigned int amount)
// {
// 	std::cout << "ClapTrap " << this->_name << " takes " << amount << " points of damage." << std::endl;
// }

// void	ClapTrap::beRepaired(unsigned int amount)
// {
// 	std::cout << "ClapTrap " << this->_name << " is repairing " << amount << " points of energy." << std::endl;
// }

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap " << this->_name << " was destroyed." << std::endl;
}
