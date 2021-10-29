#ifndef	LULU_HPP
#define LULU_HPP

#include "ICharacter.hpp" 

class Lulu : virtual public ICharacter
{
	private:
		std::string	_name;
		AMateria	*_inventory;
	public:
		Lulu(std::string const &given_name);
		Lulu(const Lulu &l);
		Lulu	&operator=(const Lulu &l);

		~Lulu();
};

#endif
