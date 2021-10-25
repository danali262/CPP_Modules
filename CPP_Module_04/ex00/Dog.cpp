#include "Dog.hpp"

Dog::Dog(void)
{
    this->type = "Dog";
    std::cout << "Dog was created." << std::endl;
}

Dog::Dog(const Dog &d)
{
    *this = d;
    std::cout   << "Dog was created via Copy Constructor." << std::endl;
}

Dog  &Dog::operator=(const Dog &d)
{
    this->type = d.type;
    std::cout   << "Dog was created via Assignment Operator." << std::endl;
    return (*this);
}

void    Dog::makeSound(void) const
{
    std::cout << "Woof woof" << std::endl;
}

Dog::~Dog(void)
{
    std::cout << "Dog was sent to a farm." << std::endl;
}
