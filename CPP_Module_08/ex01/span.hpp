#ifndef SPAN_HPP
#define SPAN_HPP

#include <algorithm>
#include <vector>
#include <exception>

class Span
{
	private:
		std::vector<int>	_vect;
		unsigned int		_size;
		unsigned int		_pos;
	public:
    	Span(unsigned int n);
		Span(const Span &s);
		Span	&operator=(const Span &s);

		void	addNumber(int nbr);
		void	addNumber(std::vector<int>::iterator const &begin, std::vector<int>::iterator const &end);
		unsigned int		shortestSpan(void) const;
		unsigned int		longestSpan(void) const;

		class NoSpaceException : public std::exception
		{
			public:
				const char *what() const throw()
				{
					return ("Not enough space in the vector to add number.\n");
				}
		};

		class NoSpanException : public std::exception
		{
			public:
				const char *what() const throw()
				{
					return ("No span to be found in vector.\n");
				}
		};

    	~Span(void);
};

#endif
