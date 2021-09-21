#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie
{
	private:
		std::string	_zombiename;
	public:
		Zombie(std::string given_name);
		Zombie();
		~Zombie();
		void	announce(void);
};

Zombie	*zombieHorde(int N, std::string name);

#endif
