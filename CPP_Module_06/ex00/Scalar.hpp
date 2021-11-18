#ifndef	SCALAR_HPP
#define SCALAR_HPP

#include <iostream>
#include <sstream>
#include <cstdlib>

class	Scalar
{
	private:
		std::string	s_value;
	public:
		Scalar(void);
		Scalar(const std::string &value);
		Scalar(const Scalar &s);
		Scalar	&operator=(const Scalar &s);

		char	toChar(void) const;
		int		toInt(void) const;
		float	toFloat(void) const;
		double	toDouble(void) const;

		~Scalar(void);
};

#endif
