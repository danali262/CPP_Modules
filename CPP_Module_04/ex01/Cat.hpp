#ifndef CAT_HPP
#define CAT_HPP
 
#include "Animal.hpp"
#include "Brain.hpp"

class   Cat : virtual public Animal
{
    private:
        Brain   *b;
    public:
        Cat(void);
        Cat(const Cat &c);
        Cat &operator=(const Cat &c);

        void	makeSound(void) const;

        virtual ~Cat();
};

#endif
