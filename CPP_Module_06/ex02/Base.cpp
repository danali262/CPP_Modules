#include "Base.hpp"

Base::Base(void) 
{
	// std::cout << "Base was created." << std::endl;
}

Base::Base(const Base &b)
{
	*this = b;
	// std::cout << "Base was created via Copy Constructor." << std::endl;
}

Base	&Base::operator=(const Base &b)
{
	if (this != &b)
	{
		// std::cout << "Base was created via Assignment Operator." << std::endl;
	}
	return (*this);
}

Base::~Base(void)
{
	// std::cout << "Base was destroyed." << std::endl;
}
