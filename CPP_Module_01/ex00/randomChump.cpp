#include "Zombie.hpp"

void	randomChump(std::string name)
{
	Zombie	chump;

	chump.baptize(name);
	chump.announce();
}
