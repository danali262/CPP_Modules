#include "Scalar.hpp"

Scalar::Scalar(void)
{
	this->s_value = "";
}

Scalar::Scalar(const std::string &value)
{
	this->s_value = value;
}

Scalar::Scalar(const Scalar &s)
{
	*this = s;
	std::cout << "Scalar was created via Copy Constructor." << std::endl;
}

Scalar	&Scalar::operator=(const Scalar &s)
{
	this->s_value = s.s_value;
	std::cout << "Scalar was created via Assignment Operator." << std::endl;
	return (*this);
}

char	Scalar::toChar(void) const
{
	int	n;

	n = this->toInt();
	return(static_cast<char>(n));
}

int		Scalar::toInt(void) const
{
	std::stringstream degree(this->s_value);
	int	n;

	n = 0;
	degree >> n;
	return (n);
}

float	Scalar::toFloat(void) const
{
	double	d;

	d = this->toDouble();
	return(static_cast<float>(d));
}

double	Scalar::toDouble(void) const
{
	std::string	str;
	const char	*c_string;
	double		d;

	str = this->s_value;
	c_string = str.c_str();
	d = atof(c_string);
	return (d);
}

Scalar::~Scalar(void) {}
