#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include <exception>
#include <stdlib.h>
#include <time.h>
#include "Bureaucrat.hpp"
#include "Form.hpp"

class RobotomyRequestForm : public Form
{
    private:
        std::string	f_target;
    public:
        RobotomyRequestForm(void);
        RobotomyRequestForm(const std::string &target);
        RobotomyRequestForm(const RobotomyRequestForm &r);
        RobotomyRequestForm  &operator=(const RobotomyRequestForm &r);

		void	execute(Bureaucrat const &exeucutor);
        void    action(void);

		~RobotomyRequestForm(void);
};

#endif
