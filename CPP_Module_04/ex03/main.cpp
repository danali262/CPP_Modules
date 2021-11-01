#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"

int	main(void)
{
    IMateriaSource *src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    ICharacter *me = new Character("me");

    std::cout << std::endl;
    AMateria *tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    std::cout << std::endl;
    tmp = src->createMateria("cure");
    me->equip(tmp);
    std::cout << std::endl;
    tmp = src->createMateria("ice-cream");
    me->equip(tmp);
    std::cout << std::endl;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    std::cout << std::endl;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    std::cout << std::endl;
    tmp = src->createMateria("cure");
    me->equip(tmp);
    std::cout << std::endl;
    me->unequip(2);
    std::cout << std::endl;

    ICharacter *bob = new Character("bob");

    me->use(0, *bob);
    me->use(1, *bob);
    me->use(2, *bob);
    me->use(3, *bob);
    me->use(4, *bob);

    delete bob;
    delete me;
    delete src;

    return (0);
}
