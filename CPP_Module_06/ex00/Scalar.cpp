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
	if (n < 0 || n > 255)
		throw Scalar::ImpossibleException();
	if (!isprint(n))
	{
		if (n == 0 && this->s_value.length() == 1)
			throw Scalar::NonDisplayableException();
		else if (n == 0 && this->s_value.length() != 1)
			throw Scalar::ImpossibleException();
		else
			throw Scalar::NonDisplayableException();
	}
	return(static_cast<char>(n));
}

int		Scalar::toInt(void) const
{
	std::stringstream degree_one(this->s_value);
	std::stringstream degree_two(this->s_value);
	int			n;
	long int	l;

	l = 0;
	degree_one >> l;
	if (l > INT_MAX || l < INT_MIN)
		throw Scalar::ImpossibleException();
	n = 0;
	degree_two >> n;
	if (n == 0 && this->s_value.length() != 1)
		throw Scalar::ImpossibleException();
	return (n);
}

float	Scalar::toFloat(void) const
{
	std::string	str;
	const char	*c_string;
	double		d;

	str = this->s_value;
	c_string = str.c_str();
	d = this->toDouble();
	if ((d == 0 && this->s_value.length() != 1) || d > FLT_MAX)
		throw Scalar::ImpossibleException();
	if (c_string[0] != '-' && d < FLT_MIN)
		throw Scalar::ImpossibleException();
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
	if ((d == 0 && this->s_value.length() != 1) || d > DBL_MAX)
		throw Scalar::ImpossibleException();
	if (c_string[0] != '-' && d < DBL_MIN)
		throw Scalar::ImpossibleException();
	return (d);
}

Scalar::~Scalar(void) {}

std::ostream	&operator<<(std::ostream &out, const Scalar &s)
{
	char	c;

	out << "char: ";
	try
	{
		c = s.toChar();
		out << "\'" << c << "\'" << std::endl;
	}
	catch(const std::exception& e)
	{
		out << e.what();
	}

	int		n;

	out << "int: ";
	try
	{
		n = s.toInt();
		out << n << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what();
	}

	float	f;

	out << "float: ";
	try
	{
		f = s.toFloat();
		out << f;
		if (f - (int)f == 0)
			out << ".0";
		out << "f" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what();
	}
	
	double	d;

	out << "double: ";
	try
	{
		d = s.toDouble();
		out << d;
		if (d - (int)d == 0)
			out << ".0";
		out << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what();
	}

	return (out);
}
