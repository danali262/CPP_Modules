#ifndef	CURE_HPP
#define	CURE_HPP

#include "AMateria.hpp"

class Cure : virtual public AMateria
{
	public:
		Cure(std::string const &type);
		Cure(const Cure &c);
		Cure &operator=(const Cure &c);

		~Cure();
};

#endif
