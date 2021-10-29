#include "AMateria.hpp"

AMateria::AMateria(std::string const &type)
{
	this->_type = type;
	std::cout << "AMateria of type " << this->_type << " was created." << std::endl;
}

AMateria::AMateria(const AMateria &a)
{
	*this = a;
	std::cout << "AMateria was created via Copy Constructor." << std::endl;
}

AMateria	&AMateria::operator=(const AMateria &a)
{
	this->_type = a._type;
	std::cout << "AMateria was created via Assignment Operator." << std::endl;
	return (*this);
}

std::string	const &AMateria::getType() const
{
	return (this->_type);
}

void	AMateria::use(ICharacter &target)
{
	// placeholder
}

AMateria::~AMateria() {}