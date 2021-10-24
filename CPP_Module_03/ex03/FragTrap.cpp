#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	this->_name = "";
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap " << "\t\t" << "with no name was created." << std::endl;
}

FragTrap::FragTrap(std::string given_name)
	this->_name = given_name;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap " << "\t\t" << this->getname() << " was created." << std::endl;
}

FragTrap::FragTrap(const FragTrap &f)
{
	*this = f;
	std::cout	<< "FragTrap " << "\t\t" << this->getname() 
				<< " was created via Copy Constructor." << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &f)
{
	this->_name = f._name;
	this->_hitPoints = f._hitPoints;
	this->_energyPoints = f._energyPoints;
	this->_attackDamage = f._attackDamage;
	std::cout	<< "FragTrap " << "\t\t" << this->getname() 
				<< " was created via Assignment Operator." << std::endl;
	return (*this);
}

void	FragTrap::attack(std::string const &target)
{
	std::cout	<< "FragTrap " << "\t\t" << this->getname()
				<< " attacks " << target 
				<< " causing " << this->getattackDamage()
				<< " points of damage." << std::endl;
	if (this->_hitPoints >= this->_attackDamage)
		this->_hitPoints -= this->_attackDamage;
	else
		this->_hitPoints = 0;
}

void	FragTrap::takeDamage(unsigned int amount)
{
	std::cout	<< "FragTrap " << "\t\t" << this->getname()
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

void	FragTrap::beRepaired(unsigned int amount)
{
	std::cout	<< "FragTrap " << "\t\t" << this->getname()
				<< " is repairing " << amount
				<< " points of energy." << std::endl;
	this->_energyPoints += amount;	
}

void	FragTrap::highFivesGuys(void)
{
	std::cout	<< "FragTrap " << "\t\t" << this->getname()
				<< " says High Five Guys!!!" << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap " << "\t\t" << this->getname() << " was destroyed." << std::endl;
}
