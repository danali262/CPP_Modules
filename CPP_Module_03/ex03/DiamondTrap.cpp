#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
	this->_name = "";
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
	std::cout << "DiamondTrap " << "\t\t" << "with no name was created." << std::endl;
}

DiamondTrap::DiamondTrap(std::string given_name)
{
	this->_name = given_name;
	this->ClapTrap::_name = given_name + "_clap_name";
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
	std::cout << "DiamondTrap " << "\t\t" << this->_name << " was created." << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &d)
{
	*this = d;
	std::cout	<< "DiamondTrap " << "\t\t" << this->getname() 
				<< " was created via Copy Constructor." << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &d)
{
	this->_name = d._name;
	this->ClapTrap::_name = given_name + "_clap_name";
	this->_hitPoints = d._hitPoints;
	this->_energyPoints = d._energyPoints;
	this->_attackDamage = d._attackDamage;
	std::cout	<< "DiamondTrap " << "\t\t" << this->getname() 
				<< " was created via Assignment Operator." << std::endl;
	return (*this);
}

void	DiamondTrap::attack(std::string const &target)
{
	this->ScavTrap::attack(target);
}

void	DiamondTrap::takeDamage(unsigned int amount)
{
	std::cout	<< "DiamondTrap " << "\t\t" << this->getname()
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

void	DiamondTrap::beRepaired(unsigned int amount)
{
	std::cout	<< "DiamondTrap " << "\t\t" << this->getname()
				<< " is repairing " << amount
				<< " points of energy." << std::endl;
	this->_energyPoints += amount;	
}

void	DiamondTrap::guardGate(void)
{
	std::cout	<< "DiamondTrap " << "\t\t" << this->getname() 
				<< " has entered in Gate keeper mode." << std::endl; 
}

void	DiamondTrap::highFivesGuys(void)
{
	std::cout	<< "DiamondTrap " << "\t\t" << this->getname()
				<< " says High Five Guys!!!" << std::endl;
}

void	DiamondTrap::whoAmI(void)
{
	std::cout	<< "DiamondTrap " << "\t\t" 
				<< "says my name is " << this->_name
				<< " and my clapTrap name is " << this->ClapTrap::_name
				<< std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap " << "\t\t" << this->getname() << " was destroyed." << std::endl;
}
