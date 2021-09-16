#include "Zombie.hpp"

int	main()
{
	Zombie *zb;

	randomChump("Delilah");
	zb = newZombie("Mariah");
	delete zb;
	return (0);
}
