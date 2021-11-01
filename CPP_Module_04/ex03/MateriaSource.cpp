#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	int	i;

	this->_materiArray = new AMateria*[4];
	for (i = 0; i < 4; i++)
		this->_materiArray[i] = NULL;
	this->_memory_pos = 0;
	// std::cout << "MateriaSource was created." << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &m)
{
	*this = m;
	// std::cout << "MateriaSource was created via Copy Constructor." << std::endl;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &m)
{
	int	i;

	if (this != &m)
	{
		this->~MateriaSource();
		for (i = 0; i < 4; i++)
			this->_materiArray = NULL;
	}
	// std::cout << "MateriaSource was created via Assignment Operator." << std::endl;
	return (*this);
}

void	MateriaSource::learnMateria(AMateria *m)
{
	if (this->_memory_pos > 3)
		return ;
	else
	{
		this->_materiArray[this->_memory_pos] = m;
		this->_memory_pos++;
	}
}

AMateria	*MateriaSource::createMateria(std::string const &type)
{
	AMateria	*res;
	int			i;

	i = 0;
	while (i < 4)
	{
		if (this->_materiArray[i]->getType() == type)
		{
			res = this->_materiArray[i]->clone();
			break;
		}
		i++;
	}
	if (i == 4)
		return (0);
	return(res);
}

MateriaSource::~MateriaSource(void)
{
	int	i;

	for (i = 0; i < 4; i++)
		delete this->_materiArray[i];
	// std::cout << "MateriaSource was destroyed." << std::endl;
}
