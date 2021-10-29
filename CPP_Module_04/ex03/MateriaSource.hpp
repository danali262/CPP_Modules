#ifndef	MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : virtual public IMateriaSource
{
	private:
		AMateria	*_memory[4];
		static int	_memory_pos; 
	public:
		MateriaSource(void);
		MateriaSource(const MateriaSource &m);
		MateriaSource &operator=(const MateriaSource &m);

		void learnMateria(AMateria *m);
		AMateria *createMateria(std::string const &type);

		~MateriaSource();
};

#endif
