#include "Brain.hpp"

Brain::Brain(void)
{
    int			i;
    int			j;
	std::string	c;

	j = 0;
    for (i = 0; i < 100; i++)
    {
		c = j + 48;
        this->ideas[i] = "idea ";
		this->ideas[i] += c;
		if (j == 9)
			j = 0;
		else
			j++;	
    }
    std::cout << "Brain was created." << std::endl;
}

Brain::Brain(const Brain &b)
{
    *this = b;
    std::cout   << "Brain was created via Copy Constructor." << std::endl;
}

Brain   &Brain::operator=(const Brain &b)
{
    int i;

    if (this != &b)
    {
        for (i = 0; i < 100; i++)
            this->ideas[i] = b.ideas[i]; 
    }
    std::cout   << "Brain was created via Assignment Operator." << std::endl;
    return (*this);
}

Brain::~Brain(void)
{
    std::cout << "Brain was destroyed." << std::endl;
}
