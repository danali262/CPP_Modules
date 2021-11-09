#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
    private:
        const std::string	_name;
        int					_grade;
    public:
        Bureaucrat(void);
        Bureaucrat(std::string given_name, int given_grade);
        Bureaucrat(const Bureaucrat &b);
        Bureaucrat  &operator=(const Bureaucrat &b);
        
        void	GradeTooHighException(void);
        void	GradeTooLowException(void);

        std::string	getName(void) const;
        int			getGrade(void) const;

		int		incrementGrade(void);
		int		decrementGrade(void);

		~Bureaucrat(void);
};

std::ostream	&operator<<(std::ostream &out, const Bureaucrat &value);

#endif
