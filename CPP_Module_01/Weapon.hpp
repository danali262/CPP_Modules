#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>
#include <iostream>

class	Weapon
{
	private:
		std::string	_type;
	public:
		Weapon(void);
		Weapon(std::string given_type);
		~Weapon(void);
		const std::string	&getType(void);
		void				setType(std::string given_type);
};

#endif
