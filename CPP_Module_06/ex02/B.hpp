#ifndef B_HPP
#define B_HPP

#include "Base.hpp"

class B : public Base
{
	public:
		B();
		B(const B &b);
		B	&operator=(const B &b);

		~B();
};

#endif
