#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"
#include "Form.hpp"

class PresidentialPardonForm : public Form
{
    public:
        PresidentialPardonForm(void);
        PresidentialPardonForm(const std::string &target);
        PresidentialPardonForm(const PresidentialPardonForm &p);
        PresidentialPardonForm  &operator=(const PresidentialPardonForm &p);

        // void    createShrubbery(std::string target);

		~PresidentialPardonForm(void);
};

#endif
