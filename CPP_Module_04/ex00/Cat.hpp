#ifndef CAT_HPP
#define CAT_HPP
 
#include "Animal.hpp"

class   Cat : virtual public Animal
{
    public:
        Cat(void);
        Cat(const Cat &c);
        Cat &operator=(const Cat &c);

        virtual ~Cat();
};

#endif
