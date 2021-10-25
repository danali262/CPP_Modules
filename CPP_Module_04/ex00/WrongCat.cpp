#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
    this->type = "WrongCat";
    std::cout << "WrongCat was created." << std::endl;
}

WrongCat::WrongCat(const WrongCat &wc)
{
    *this = wc;
    std::cout   << "WrongCat was created via Copy Constructor." << std::endl;
}

WrongCat  &WrongCat::operator=(const WrongCat &wc)
{
    this->type = wc.type;
    std::cout   << "WrongCat was created via Assignment Operator." << std::endl;
    return (*this);
}

void    WrongCat::makeSound(void) const
{
    std::cout << "Wrongmeow wrongmeow" << std::endl;
}

WrongCat::~WrongCat(void)
{
    std::cout << "WrongCat was sent to a farm." << std::endl;
}
