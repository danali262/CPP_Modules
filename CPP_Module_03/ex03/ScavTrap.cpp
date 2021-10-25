#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
	this->_name = "";
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "ScavTrap " << "\t\t" << "with no name was created." << std::endl;
}

ScavTrap::ScavTrap(std::string given_name) : ClapTrap(given_name)
{
	this->_name = given_name;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "ScavTrap " << "\t\t" << this->getname() << " was created." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &s) : ClapTrap(s)
{
	*this = s;
	std::cout	<< "ScavTrap " << "\t\t" << this->getname() 
				<< " was created via Copy Constructor." << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &s)
{
	this->_name = s._name;
	this->_hitPoints = s._hitPoints;
	this->_energyPoints = s._energyPoints;
	this->_attackDamage = s._attackDamage;
	std::cout	<< "ScavTrap " << "\t\t" << this->getname() 
				<< " was created via Assignment Operator." << std::endl;
	return (*this);
}

void	ScavTrap::attack(std::string const &target)
{
	std::cout	<< "ScavTrap " << "\t\t" << this->getname()
				<< " attacks " << target 
				<< " causing " << this->getattackDamage()
				<< " points of damage." << std::endl;
	if (this->_hitPoints >= this->_attackDamage)
		this->_hitPoints -= this->_attackDamage;
	else
		this->_hitPoints = 0;
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	std::cout	<< "ScavTrap " << "\t\t" << this->getname()
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

void	ScavTrap::beRepaired(unsigned int amount)
{
	std::cout	<< "ScavTrap " << "\t\t" << this->getname()
				<< " is repairing " << amount
				<< " points of energy." << std::endl;
	this->_energyPoints += amount;	
}

void	ScavTrap::guardGate(void)
{
	std::cout	<< "ScavTrap " << "\t\t" << this->getname() 
				<< " has entered in Gate keeper mode." << std::endl; 
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap " << "\t\t" << this->getname() << " was destroyed." << std::endl;
}
