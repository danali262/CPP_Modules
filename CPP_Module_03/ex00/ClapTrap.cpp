#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	this->_name = "";
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
	std::cout << "ClapTrap with no name was created." << std::endl;
}

ClapTrap::ClapTrap(std::string given_name)
{
	this->_name = given_name;	
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
	std::cout << "ClapTrap " << this->_name << " was created." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &c)
{
	*this = c;
	std::cout << "ClapTrap " << this->_name << " was created via Copy Constructor." << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &c)
{
	this->_name = c._name;
	this->_hitPoints = c._hitPoints;
	this->_energyPoints = c._energyPoints;
	this->_attackDamage = c._attackDamage;
	std::cout << "ClapTrap " << this->_name << " was created via Assignment Operator." << std::endl;
	return (*this);
}

void	ClapTrap::attack(std::string const &target)
{
	std::cout	<< "ClapTrap " << this->_name 
				<< " attacks " << target 
				<< " causing " << this->_attackDamage 
				<< " points of damage." << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout	<< "ClapTrap " << this->_name 
				<< " takes " << amount 
				<< " points of damage." << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout	<< "ClapTrap " << this->_name 
				<< " is repairing " << amount 
				<< " points of energy." << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap " << this->_name << " was destroyed." << std::endl;
}
