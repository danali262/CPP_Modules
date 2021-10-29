#include "Character.hpp"

Character::Character(std::string const &given_name)
{
	int	i;

	this->_name = given_name;
	for (i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
	this->_materia_slot = 0;
	std::cout << "Character " << this->_name << "was created." << std::endl;
}

Character::Character(const Character &c)
{
	*this = &c;
	std::cout << "Character " << this->_name << "was created via Copy Constructor." << std::endl;
}

Character	&Character::operator=(const Character &c)
{
	int	i;

	if (*this != &c)
	{
		this->~Character();
		this->_name = c._name;
		for (i = 0; i < 4; i++)
			this->_inventory[i] = NULL;		
	}
	std::cout << "Character " << this->_name << "was created via Assignment Operator." << std::endl;
	return (*this);
}

std::string const	&Character::getName(void)
{
	return(this->_name);
}

void	Character::equip(AMateria *m)
{
	if (this->_materia_slot > 3)
		return;
	else
	{
		this->_inventory[this->_materia_slot] = m;
		this->_materia_slot++;
	}
}

void	Character::unequip(int idx)
{
	this->_inventory[idx] = NULL;
}

void	Character::use(int idx, ICharacter &target)
{
	std::cout << "Materia " << this->_inventory[idx] << std::endl;
}

Character::~Character(void)
{
	int	i;

	for (i = 0; i < 4; i++)
		delete this->_inventory[i];
	std::cout << "Character " << this->_name << "was destroyed." << std::endl;
}