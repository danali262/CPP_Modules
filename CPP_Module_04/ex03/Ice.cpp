#include "Ice.hpp"

Ice::Ice(std::string const &type)
{
	this->_type = "ice";
	std::cout << "Ice of type " << this->_type << " was created." << std::endl;
}

Ice::Ice(const Ice &i)
{
	*this = i;
	std::cout << "Ice was created via Copy Constructor." << std::endl;
}

Ice		&Ice::operator=(const Ice &i)
{
	this->_type = i._type;
	std::cout << "Ice was created via Assignment Operator." << std::endl;
	return (*this);
}

Ice		*Ice::clone() const
{
	Ice	*i;

	i = new Ice();
	return (i);
}

void	Ice::use(ICharacter &target)
{
	std::cout << " * shoots an ice bolt at " << target << " *" << std::endl;
}

Ice::~Ice()
{
	std::cout << "Ice of type " << this->_type << " is destroyed." << std::endl;
}
