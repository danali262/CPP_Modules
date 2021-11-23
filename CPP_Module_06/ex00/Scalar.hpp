#ifndef	SCALAR_HPP
#define SCALAR_HPP

#include <iostream>
#include <sstream>
#include <cstdlib>
#include <cctype>
#include <exception>
#include <climits>
#include <cfloat>

class	Scalar
{
	private:
		std::string	s_value;
	public:
		Scalar(void);
		Scalar(const std::string &value);
		Scalar(const Scalar &s);
		Scalar	&operator=(const Scalar &s);

		class	ImpossibleException : public std::exception
		{
			public:
				const char	*what() const throw()
				{
					return ("impossible\n");
				}
		};

		class	NonDisplayableException : public std::exception
		{
			public:
				const char	*what() const throw()
				{
					return ("Non displayable\n");
				}
		};

		char	toChar(void) const;
		int		toInt(void) const;
		float	toFloat(void) const;
		double	toDouble(void) const;

		~Scalar(void);
};

std::ostream	&operator<<(std::ostream &out, const Scalar &s);

#endif
