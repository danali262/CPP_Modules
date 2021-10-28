#include "Dog.hpp"

Dog::Dog(void)
{
    this->type = "Dog";
    this->b = new Brain();
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
    this->b = d.b;
    std::cout   << "Dog was created via Assignment Operator." << std::endl;
    return (*this);
}

void    Dog::makeSound(void) const
{
    std::cout << "Woof woof" << std::endl;
}

Dog::~Dog(void)
{
    delete this->b;
    std::cout << "Dog was sent to a farm." << std::endl;
}
