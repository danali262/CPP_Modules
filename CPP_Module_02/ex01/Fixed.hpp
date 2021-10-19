#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int					f_value;
		static const int	f_fractional_bits = 8;
	public:
		Fixed(void);
		Fixed(const Fixed &f);
		Fixed(const int input_int);
		Fixed(const float input_float);
		Fixed &operator=(const Fixed &f);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		int		toInt(void) const;
		float	toFloat(void) const;
		~Fixed(void);
};

std::ostream &operator<<(std::ostream &out, const Fixed &value);

#endif
