#ifndef	CHARACTER_HPP
#define CHARACTER_HPP

#include "AMateria.hpp"

class Character : public ICharacter
{
	private:
		std::string	_name;
		AMateria	*_inventory[4];
		int			_materia_slot;
	public:
		Character(void);
		Character(std::string const &given_name);
		Character(const Character &c);
		Character	&operator=(const Character &c);

		std::string const &getName(void) const;
		void equip(AMateria *m);
		void unequip(int idx);
		void use(int idx, ICharacter &target);

		~Character();
};

#endif
