#include "Fixed.hpp"

Fixed::Fixed(void)
{
    std::cout << "Default constructor called." << std::endl;
    this->f_value = 0;
}

Fixed::Fixed(const Fixed &f)
{
    std::cout << "Copy constructor called." << std::endl;
    this->f_value = f.getRawBits();
}

Fixed& Fixed::operator= (const Fixed &f)
{
    std::cout << "Assignation operator called." << std::endl;
    this->f_value = f.getRawBits();
    return(*this);
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called." << std::endl;
	return(this->f_value);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called." << std::endl;
	this->f_value = raw;
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called." << std::endl;
}
