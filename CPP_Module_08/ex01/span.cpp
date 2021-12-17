#include "span.hpp"

Span::Span(unsigned int n)
{
    this->_size = n;
	this->_pos = 0;
}

Span::Span(const Span &s)
{
    *this = s;
}

Span    &Span::operator=(const Span &s)
{
    if(this != &s)
	{
        this->_size = s._size;
		this->_pos = 0;
	}
    return (*this);
}

void	Span::addNumber(int nbr)
{
	if (this->_pos > this->_size)
		throw NoSpaceException();
	this->_vect.push_back(nbr);	
}