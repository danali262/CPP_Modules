#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie *zombie_horde;
    int     i;

    zombie_horde = new Zombie[N];
    i = 0;
    while (i < N)
    {
        zombie_horde[i].baptize(name, i);
        zombie_horde[i].announce();
        i++;
    }
    return (zombie_horde);
}
