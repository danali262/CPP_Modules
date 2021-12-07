#ifndef AWESOME_HPP
#define	AWESOME_HPP

#include <iostream>

class Awesome
{
	private:
		int	_n;
	public:
		Awesome(int n):_n(n) {}
		int	get(void) const { return this->_n; }
		bool	operator==(Awesome const &rhs) const { return (this->_n == rhs._n); }
		bool	operator!=(Awesome const &rhs) const { return (this->_n != rhs._n); }
		bool	operator>(Awesome const &rhs) const { return (this->_n > rhs._n); }
		bool	operator<(Awesome const &rhs) const { return (this->_n < rhs._n); }
		bool	operator>=(Awesome const &rhs) const { return (this->_n >= rhs._n); }
		bool	operator<=(Awesome const &rhs) const { return (this->_n <= rhs._n); }
};

std::ostream	&operator<<(std::ostream &o, Awesome const &rhs) { o << rhs.get(); return o;}

#endif
