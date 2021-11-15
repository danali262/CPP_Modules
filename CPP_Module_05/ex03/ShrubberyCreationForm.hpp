#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include <fstream>
#include <exception>
#include "Bureaucrat.hpp"
#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
    private:
        std::string f_target;
    public:
        ShrubberyCreationForm(void);
        ShrubberyCreationForm(const std::string &target);
        ShrubberyCreationForm(const ShrubberyCreationForm &s);
        ShrubberyCreationForm  &operator=(const ShrubberyCreationForm &s);

        void        execute(Bureaucrat const &executor) const;
        void        action(void) const;
        static Form *create(std::string const &target);

		~ShrubberyCreationForm(void);
};

#endif
