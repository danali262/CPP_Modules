#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
    std::cout << "WrongAnimal was created." << std::endl;
}

WrongAnimal::WrongAnimal(std::string given_type)
{
    this->type = given_type;
    std::cout << "WrongAnimal of type " << this->type << " was created." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &w)
{
    *this = w;
    std::cout   << "WrongAnimal of type " << this->type
                << " was created via Copy Constructor." << std::endl;
}

WrongAnimal  &WrongAnimal::operator=(const WrongAnimal &w)
{
    this->type = w.type;
    std::cout   << "WrongAnimal of type " << this->type
                << " was created via Assignment Operator." << std::endl;
    return (*this);
}

std::string     WrongAnimal::getType(void) const
{
    return(this->type);
}

void    WrongAnimal::makeSound(void) const
{
    std::cout << "The sound of a WrongAnimal . . " << std::endl;
}

WrongAnimal::~WrongAnimal(void)
{
    std::cout << "WrongAnimal was sent to a farm." << std::endl;
}
