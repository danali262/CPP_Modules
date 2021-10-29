#ifndef	ICE_HPP
#define	ICE_HPP

#include "AMateria.hpp"

class Ice : virtual public AMateria
{
	public:
		Ice(std::string const &type);
		Ice(const Ice &i);
		Ice &operator=(const Ice &i);

		~Ice();
};

#endif
