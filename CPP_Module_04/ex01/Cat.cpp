#include "Cat.hpp"

Cat::Cat(void)
{
    this->type = "Cat";
    std::cout << "Cat was created." << std::endl;
}

Cat::Cat(const Cat &c)
{
    *this = c;
    std::cout   << "Cat was created via Copy Constructor." << std::endl;
}

Cat  &Cat::operator=(const Cat &c)
{
    this->type = c.type;
    std::cout   << "Cat was created via Assignment Operator." << std::endl;
    return (*this);
}

void    Cat::makeSound(void) const
{
    std::cout << "Meow meow" << std::endl;
}

Cat::~Cat(void)
{
    std::cout << "Cat was sent to a farm." << std::endl;
}
