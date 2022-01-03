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
	this->_pos++;
}

unsigned int		Span::shortestSpan(void) const
{
	if (this->_size <= 1)
		throw NoSpanException();

	std::vector<int> newVector = this->_vect;

	std::sort(newVector.begin(), newVector.end());
	std::vector<int>::iterator prev_it = newVector.begin();
	std::vector<int>::iterator next_it = ++newVector.begin();

	unsigned int min;

	min = *next_it - *prev_it;

	while (next_it != newVector.end())
	{
		if ((unsigned int)*next_it - *prev_it < min)
			min = (unsigned int)*next_it - *prev_it;
		prev_it = next_it;
		next_it++;
	}
	return (min);
}

unsigned int		Span::longestSpan(void) const
{
	if (this->_size <= 1)
		throw NoSpanException();

	std::vector<int> newVector = this->_vect;

	std::sort(newVector.begin(), newVector.end());
	return (newVector.back()- newVector.front());
}

Span::~Span(void) {}
