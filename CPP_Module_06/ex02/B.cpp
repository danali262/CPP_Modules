#include "B.hpp"

B::B(void) 
{
	// std::cout << "B was created." << std::endl;
}

B::B(const B &b)
{
	*this = b;
	// std::cout << "B was created via Copy Constructor." << std::endl;
}

B	&B::operator=(const B &b)
{
	if (this != &b)
	{
		// std::cout << "B was created via Assignment Operator." << std::endl;
	}
	return (*this);
}

B::~B(void)
{
	// std::cout << "B was destroyed." << std::endl;
}
