#include "Zombie.hpp"

Zombie::Zombie(std::string given_name)
{
	this->_zombiename = given_name;
	std::cout << this->_zombiename << " is created." << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << this->_zombiename << " BraiiiiiiinnnzzzZ. . ." << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << this->_zombiename << " is destructed." << std::endl;
}
