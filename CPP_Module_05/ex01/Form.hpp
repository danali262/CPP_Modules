#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <exception>

class Bureaucrat;

class Form
{
    private:
        const std::string	f_name;
        bool				f_signed;
		const int			f_grade_sign;
		const int			f_grade_exec;
    public:
        Form(void);
        Form(std::string given_name, int given_grade_sign, int given_grade_exec);
        Form(const Form &f);
        Form  &operator=(const Form &f);
        
        class   GradeTooHighException : public std::exception
        {
            public:
                const char *what() const throw()
                {
                    return ("WARNING : Bureaucrat grade is too high.\n");
                }
        };
        
        class	GradeTooLowException : public std::exception
        {
            public:
                const char *what() const throw()
                {
                    return ("WARNING : Bureaucrat grade is too low.\n");
                }
        };

        std::string	getName(void) const;
        bool        getStatus(void) const;
        int			getGradeSign(void) const;
        int			getGradeExec(void) const;

        void    beSigned(Bureaucrat const &b);

		~Form(void);
};

std::ostream	&operator<<(std::ostream &out, const Form &f);

#endif
