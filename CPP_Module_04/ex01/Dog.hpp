#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class   Dog : virtual public Animal
{
    private:
        Brain   *b;
    public:
        Dog(void);
        Dog(std::string given_type);
        Dog(const Dog &d);
        Dog &operator=(const Dog &d);

        void	makeSound(void) const;
        void    printBrainIdeas(void) const;

        virtual ~Dog();
};

#endif
