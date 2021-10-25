#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class   Dog : virtual public Animal
{
    public:
        Dog(void);
        Dog(std::string given_type);
        Dog(const Animal &d);
        Dog &operator=(const Dog &d);

        virtual ~Dog();
};

#endif
