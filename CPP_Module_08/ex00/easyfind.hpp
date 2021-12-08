#ifndef EASYFIND_HPP
#define	EASYFIND_HPP

#include <algorithm>
#include <exception>
#include <iostream>

class NotFoundException : public std::exception
{
	public:
		const char *what() const throw()
		{
			return ("Item not found in container.\n");
		}
};

template <typename T>

void	easyfind(T &x, int &y)
{
	typename T::const_iterator pos;

	pos = std::find(x.begin(), x.end(), y);
	if (pos == x.end())
		throw NotFoundException();
	else
		std::cout	<< "First occurence of " << y << " in the container happens at position "
					<< *pos << std::endl;
}

#endif
