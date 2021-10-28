#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class   Brain
{
    private:
        std::string ideas[100];
    public:
        Brain(void);
        Brain(const Brain &b);
        Brain &operator=(const Brain &b);

        void    getFiveIdeas(void) const;
        ~Brain();
};

#endif
