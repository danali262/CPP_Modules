#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
 
#include <iostream>

class   WrongAnimal
{
    protected:
        std::string type;
    public:
        WrongAnimal(void);
        WrongAnimal(std::string given_type);
        WrongAnimal(const WrongAnimal &w);
        WrongAnimal &operator=(const WrongAnimal &w);

        std::string	getType(void) const;
        void		makeSound(void) const;

        virtual ~WrongAnimal();
};

#endif
