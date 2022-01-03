#include <iostream>
#include "span.hpp"

int	main(void)
{
	{
		Span sp = Span(5);

		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
	
		std::cout << sp.shortestSpan() <<std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	{
		Span sp(10000);

		std::vector<int> vec;

		for (int i = 0; i < 10000; i++)
		{
			vec.push_back(i + 1);
		}

		sp.addNumber(vec.begin(), vec.end());
		std::cout << sp.shortestSpan() <<std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	return (0);
}

