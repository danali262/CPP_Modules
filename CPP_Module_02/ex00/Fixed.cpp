#include "Fixed.hpp"

Fixed::Fixed()
{
    this->f_value = 0;
    std::cout << "Default constructor called." << std::endl;
}

Fixed::Fixed(const Fixed &f)
{
    this->f_value = f.f_value;
    std::cout << "Copy constructor called." << std::endl;
}

Fixed& Fixed::operator= (const Fixed &f)
{
    this->f_value = f.f_value;
    std::cout << "Assignation operator called." << std::endl;
    return(*this);
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called." << std::endl;
	return(this->f_value);
}

void	Fixed::setRawBits(int const raw)
{
	this->f_value = raw;
	std::cout << "setRawBits member function called." << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called." << std::endl;
}
