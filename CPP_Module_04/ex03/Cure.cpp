#include "Cure.hpp"

Cure::Cure(void)
{
	this->_type = "cure";
	// std::cout << "Cure of type " << this->_type << " was created." << std::endl;
}

Cure::Cure(const Cure &c)
{
	*this = c;
	// std::cout << "Cure was created via Copy Constructor." << std::endl;
}

Cure		&Cure::operator=(const Cure &c)
{
	this->_type = c._type;
	// std::cout << "Cure was created via Assignment Operator." << std::endl;
	return (*this);
}

AMateria	*Cure::clone() const
{
	Cure	*c;

	c = new Cure();
	return (c);
}

void		Cure::use(ICharacter &target)
{
	std::cout << " * heals " << target.getName() << "'s wounds *" << std::endl;
}

Cure::~Cure()
{
	// std::cout << "Cure of type " << this->_type << " is destroyed." << std::endl;
}
