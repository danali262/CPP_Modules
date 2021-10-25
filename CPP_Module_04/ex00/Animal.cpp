#include "Animal.hpp"

Animal::Animal(void)
{
    std::cout << "Animal was created." << std::endl;
}

Animal::Animal(std::string given_type)
{
    this->type = given_type;
    std::cout << "Animal of type " << this->type << " was created." << std::endl;
}

Animal::Animal(const Animal &a)
{
    *this = a;
    std::cout   << "Animal of type " << this->type
                << " was created via Copy Constructor." << std::endl;
}

Animal  &Animal::operator=(const Animal &a)
{
    this->type = a.type;
    std::cout   << "Animal of type " << this->type
                << " was created via Assignment Operator." << std::endl;
    return (*this)
}

Animal::~Animal(void)
{
    std::cout << "Animal of type " << this->type << " was sent to a farm." << std::endl;
}