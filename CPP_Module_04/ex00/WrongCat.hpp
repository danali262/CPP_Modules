#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP
 
#include "WrongAnimal.hpp"

class   WrongCat : virtual public WrongAnimal
{
    public:
        WrongCat(void);
        WrongCat(const WrongCat &wc);
        WrongCat &operator=(const WrongCat &wc);

        void	makeSound(void) const;

        virtual ~WrongCat();
};

#endif
