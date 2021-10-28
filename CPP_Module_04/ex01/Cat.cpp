#include "Cat.hpp"

Cat::Cat(void)
{
    this->type = "Cat";
    this->b = new Brain();
    std::cout << "Cat was created." << std::endl;
}

Cat::Cat(const Cat &c)
{
    *this = c;
    std::cout   << "Cat was created via Copy Constructor." << std::endl;
}

Cat  &Cat::operator=(const Cat &c)
{
    if (this != &c)
    {
        this->~Cat();
        this->type = c.type;
        this->b = new Brain();
    }
    std::cout   << "Cat was created via Assignment Operator." << std::endl;
    return (*this);
}

void    Cat::makeSound(void) const
{
    std::cout << "Meow meow" << std::endl;
}

// void    Cat::printBrain(void)
// {
//     int i;

//     i = 0;
//     while (i < 10)
//     {
//         std::cout << this->b->ideas[i] << std::endl;
//         i++;
//     }
// }

Cat::~Cat(void)
{
    delete this->b;
    std::cout << "Cat was sent to a farm." << std::endl;
}
