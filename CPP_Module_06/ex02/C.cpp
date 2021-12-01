#include "C.hpp"

C::C(void) 
{
	// std::cout << "C was created." << std::endl;
}

C::C(const C &c)
{
	*this = c;
	// std::cout << "C was created via Copy Constructor." << std::endl;
}

C	&C::operator=(const C &c)
{
	if (this != &c)
	{
		// std::cout << "C was created via Assignment Operator." << std::endl;
	}
	return (*this);
}

C::~C(void)
{
	// std::cout << "C was destroyed." << std::endl;
}
