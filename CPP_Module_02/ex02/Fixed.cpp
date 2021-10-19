#include "Fixed.hpp"

Fixed::Fixed(void)
{
    this->f_value = 0;
}

Fixed::Fixed(const Fixed &f)
{
    this->f_value = f.getRawBits();
}

Fixed::Fixed(const int input_int)
{
    this->f_value = input_int << this->f_fractional_bits;
}

Fixed::Fixed(const float input_float)
{
    this->f_value = (int)roundf(input_float * (1 << this->f_fractional_bits));
}

Fixed &Fixed::operator=(const Fixed &f)
{
    this->f_value = f.getRawBits();
    return(*this);
}

bool	Fixed::operator>(const Fixed &f)
{
    return (this->f_value > f.f_value);
}

bool	Fixed::operator<(const Fixed &f)
{
    return (this->f_value < f.f_value);
}

bool	Fixed::operator>=(const Fixed &f)
{
    return (this->f_value >= f.f_value);
}

bool	Fixed::operator<=(const Fixed &f)
{
    return (this->f_value <= f.f_value);
}

bool	Fixed::operator==(const Fixed &f)
{
    return (this->f_value == f.f_value);
}

bool	Fixed::operator!=(const Fixed &f)
{
    return (this->f_value != f.f_value);
}

int Fixed::getRawBits(void) const
{
	return(this->f_value);
}

void	Fixed::setRawBits(int const raw)
{
	this->f_value = raw;
}

float   Fixed::toFloat(void) const
{
    return((float)this->f_value / (1 << this->f_fractional_bits));
}

int     Fixed::toInt(void) const
{
    return(this->f_value >> this->f_fractional_bits);
}

Fixed::~Fixed(void) {}

std::ostream &operator<<(std::ostream &out, const Fixed &f)
{
    out << f.toFloat();
    return (out);
}
