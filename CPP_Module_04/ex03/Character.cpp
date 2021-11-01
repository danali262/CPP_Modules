#include "Character.hpp"

Character::Character(void)
{
	int	i;

	this->_name = "";
	for (i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
	this->_materia_slot = 0;
	// std::cout << "Character with no name was created." << std::endl;
}

Character::Character(std::string const &given_name)
{
	int	i;

	this->_name = given_name;
	for (i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
	this->_materia_slot = 0;
	// std::cout << "Character " << this->_name << "was created." << std::endl;
}

Character::Character(const Character &c)
{
	*this = c;
	// std::cout << "Character " << this->_name << "was created via Copy Constructor." << std::endl;
}

Character	&Character::operator=(const Character &c)
{
	int	i;

	if (this != &c)
	{
		this->~Character();
		this->_name = c._name;
		for (i = 0; i < 4; i++)
			if (c.getMateria(i) == NULL)
				this->_inventory[i] = NULL;
			else
				this->_inventory[i] = c._inventory[i]->clone();
	}
	// std::cout << "Character " << this->_name << "was created via Assignment Operator." << std::endl;
	return (*this);
}

std::string const	&Character::getName(void) const
{
	return(this->_name);
}

AMateria const		*Character::getMateria(int idx) const
{
	return(this->_inventory[idx]);
}

void	Character::equip(AMateria *m)
{
	if (!m)
		return ;
	if (this->_materia_slot > 3)
	{
		std::cout << "Not enough space to equip materia." << std::endl;
		return;
	}
	else
	{
		this->_inventory[this->_materia_slot] = m;
		this->_materia_slot++;
	}
	std::cout << "Materia " << m->getType() << " equiped." << std::endl;
}

void	Character::unequip(int idx)
{
	if (!this->_inventory[idx])
		return ;
	if (idx < 0 || idx > 3)
	{
		std::cout << " * nothing happens . . . *" << std::endl;
		return ;
	}
	std::cout	<< "Unequiping " << this->_inventory[idx]->getType() 
				<< " position " << idx 
				<< ". . ." << std::endl;
	this->_inventory[idx] = NULL;
}

void	Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || idx > 3 || this->_inventory[idx] == NULL)
	{
		std::cout << " * nothing happens . . . *" << std::endl;
		return ;
	}
	if (this->_inventory[idx] != NULL)
		this->_inventory[idx]->use(target);
}

Character::~Character(void)
{
	int	i;

	for (i = 0; i < 4; i++)
		delete this->_inventory[i];
	// std::cout << "Character " << this->_name << "was destroyed." << std::endl;
}
