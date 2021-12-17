#ifndef SPAN_HPP
#define SPAN_HPP

#include <algorithm>
#include <vector>

class Span
{
	private:
		std::vector<int>	_vect;
		unsigned int		_size;
	public:
    	Span(unsigned int N);
    	~Span(void);
};

#endif
