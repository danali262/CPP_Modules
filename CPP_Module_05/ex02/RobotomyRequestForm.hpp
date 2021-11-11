#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"
#include "Form.hpp"

class RobotomyRequestForm : public Form
{
    public:
        RobotomyRequestForm(void);
        RobotomyRequestForm(const std::string &target);
        RobotomyRequestForm(const RobotomyRequestForm &r);
        RobotomyRequestForm  &operator=(const RobotomyRequestForm &r);

        // void    createShrubbery(std::string target);

		~RobotomyRequestForm(void);
};

#endif
