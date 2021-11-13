#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"
#include "Form.hpp"

class PresidentialPardonForm : public Form
{
    private:
        std::string f_target;
    public:
        PresidentialPardonForm(void);
        PresidentialPardonForm(const std::string &target);
        PresidentialPardonForm(const PresidentialPardonForm &p);
        PresidentialPardonForm  &operator=(const PresidentialPardonForm &p);

        void    execute(Bureaucrat const &executor) const;
        void    action(void) const;

		~PresidentialPardonForm(void);
};

#endif
