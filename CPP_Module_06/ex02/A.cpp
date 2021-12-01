#include "A.hpp"

A::A(void) 
{
	// std::cout << "A was created." << std::endl;
}

A::A(const A &a)
{
	*this = a;
	// std::cout << "A was created via Copy Constructor." << std::endl;
}

A	&A::operator=(const A &a)
{
	if (this != &a)
	{
		// std::cout << "A was created via Assignment Operator." << std::endl;
	}
	return (*this);
}

A::~A(void)
{
	// std::cout << "A was destroyed." << std::endl;
}
