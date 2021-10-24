#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	this->_name = "";
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
	std::cout << "ClapTrap " << "\t\t" << "with no name was created." << std::endl;
}

ClapTrap::ClapTrap(std::string given_name)
{
	this->_name = given_name;	
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
	std::cout << "ClapTrap " << "\t\t" << this->_name << " was created." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &c)
{
	*this = c;
	std::cout	<< "ClapTrap " << "\t\t" << this->_name 
				<< " was created via Copy Constructor." << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &c)
{
	this->_name = c._name;
	this->_hitPoints = c._hitPoints;
	this->_energyPoints = c._energyPoints;
	this->_attackDamage = c._attackDamage;
	std::cout	<< "ClapTrap " << "\t\t" << this->_name
				<< " was created via Assignment Operator." << std::endl;
	return (*this);
}

void	ClapTrap::attack(std::string const &target)
{
	std::cout	<< "ClapTrap " << "\t\t" << this->_name
				<< " attacks " << target 
				<< " causing " << this->_attackDamage 
				<< " points of damage." << std::endl;
	if (this->_hitPoints >= this->_attackDamage)
		this->_hitPoints -= this->_attackDamage;
	else
		this->_hitPoints = 0;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout	<< "ClapTrap " << "\t\t" << this->_name
				<< " takes " << amount 
				<< " points of damage." << std::endl;
	if (this->_energyPoints > 0)
	{
		if (amount > this->_energyPoints)
			this->_energyPoints = 0;
		else
			this->_energyPoints -= amount;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout	<< "ClapTrap " << "\t\t" << this->_name 
				<< " is repairing " << amount
				<< " points of energy." << std::endl;
	this->_energyPoints += amount;
}

std::string		ClapTrap::getname(void) const
{
	return (this->_name);
}

unsigned int	ClapTrap::gethitPoints(void) const
{
	return (this->_hitPoints);
}

unsigned int	ClapTrap::getenergyPoints(void) const
{
	return (this->_energyPoints);
}

unsigned int	ClapTrap::getattackDamage(void) const
{
	return (this->_attackDamage);
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap " << "\t\t" << this->_name << " was destroyed." << std::endl;
}
