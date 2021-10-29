#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	int	i;

	for (i = 0; i < 4; i++)
		this->_memory[i] = NULL;
	this->_memory_pos = 0;
	std::cout << "MateriaSource was created." << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &m)
{
	*this = m;
	std::cout << "MateriaSource was created via Copy Constructor." << std::endl;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &m)
{
	if (*this != &m)
	{
		this->~MateriaSource();
		for (i = 0; i < 4; i++)
			this->_memory = NULL;
	}
	std::cout << "MateriaSource was created via Assignment Operator." << std::endl;
}

void	MateriaSource::learnMateria(AMateria *m)
{
	if (this->_memory_pos > 3)
		return ;
	else
	{
		this->_memory[this->_memory_pos] = m;
		this->_memory_pos++;
	}
}

AMateria	*MateriaSource::createMateria(std::string const &type)
{
	AMateria	*res;
	int			i;

	res = new AMateria();
	while (i < 4)
	{
		if (type  )
	}	
	res(type);
	res = this->_memory[this->_memory_pos];

}

MateriaSource::~MateriaSource(void)
{
	int	i;

	for (i = 0; i < 4; i++)
		delete this->_memory[i];
	std::cout << "MateriaSource was destroyed." << std::endl;
}