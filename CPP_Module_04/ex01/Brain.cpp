#include "Brain.hpp"

Brain::Brain(void)
{
    std::cout << "Brain was created." << std::endl;
}

Brain::Brain(const Brain &b)
{
    *this = b;
    std::cout   << "Brain was created via Copy Constructor." << std::endl;
}

Brain   &Brain::operator=(const Brain &b)
{
    this->ideas = b.ideas;
    std::cout   << "Brain was created via Assignment Operator." << std::endl;
    return (*this);
}

Brain::~Brain(void)
{
    std::cout << "Brain was destroyed." << std::endl;
}
