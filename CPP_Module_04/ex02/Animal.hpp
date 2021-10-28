#ifndef ANIMAL_HPP
#define ANIMAL_HPP
 
#include <iostream>

class   Animal
{
    protected:
        std::string type;
    public:
        Animal(void);
        Animal(std::string given_type);
        Animal(const Animal &a);
        Animal &operator=(const Animal &a);

        std::string		getType(void) const;
        virtual void	makeSound(void) const = 0;

        virtual ~Animal();
};

#endif
