#include "Zombie.hpp"

int	main()
{
	Zombie *zb;

	zb = zombieHorde(5, "Mariah");
	delete[] zb;
	return (0);
}

