#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"
#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
    public:
        ShrubberyCreationForm(void);
        ShrubberyCreationForm(const std::string &target);
        ShrubberyCreationForm(const ShrubberyCreationForm &s);
        ShrubberyCreationForm  &operator=(const ShrubberyCreationForm &s);

        // void    createShrubbery(std::string target);

		~ShrubberyCreationForm(void);
};

#endif
