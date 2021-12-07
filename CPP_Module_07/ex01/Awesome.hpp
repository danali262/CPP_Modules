#ifndef AWESOME_HPP
#define	AWESOME_HPP

#include <iostream>

class Awesome
{
	private:
		int	_n;
	public:
		Awesome(void):_n(42) { return; }
		int	get(void) const { return this->_n; }
};

std::ostream	&operator<<(std::ostream &o, Awesome const &rhs) { o << rhs.get(); return o;}

template <typename T>

void	print(T const &x) { std::cout << x << std::endl; return ;}

#endif
