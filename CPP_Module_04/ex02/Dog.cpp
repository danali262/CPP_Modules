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
    if (this != &d)
    {
        this->~Dog();
        this->type = d.type;
		this->b = new Brain(*d.b);
    }
    std::cout   << "Dog was created via Assignment Operator." << std::endl;
    return (*this);
}

void    Dog::makeSound(void) const
{
    std::cout << "Woof woof" << std::endl;
}

void    Dog::printBrainIdeas(void) const
{
    this->b->getFiveIdeas(); 
}

Dog::~Dog(void)
{
    delete this->b;
    std::cout << "Dog was sent to a farm." << std::endl;
}
