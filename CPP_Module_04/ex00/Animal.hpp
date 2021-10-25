#ifndef ANIMAL_HPP
#define ANIMAL_HPP
 
class   Animal
{
    protected:
        std::string type;
    public:
        Animal();
        Animal(std::string given_type);
        Animal(const Animal &a);
        Animal &operator=(const Animal &a);

        virtual ~Animal();
};

#endif
