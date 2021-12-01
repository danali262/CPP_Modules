#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>

class	Base
{
	public:
		Base(void);
		Base(const Base &b);
		Base	&operator=(const Base &b);

		virtual ~Base(void);
};

#endif
