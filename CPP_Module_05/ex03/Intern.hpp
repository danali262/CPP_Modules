#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include "Form.hpp"

class	Intern
{
	public:
		Intern(void);
		Intern(const Intern &i);
		Intern	&operator=(const Intern &);

		Form *makeForm(std::string formName, std::string formTarget);

		class unknownFormException : public std::exception
		{
			public:
				const char *what() const throw()
				{
					return ("Unknown form creation request.\n");
				}
		};

		~Intern(void);
};

typedef	struct	s_lookup
{
	std::string	str;
	Form		*(Form::*f)();
}				t_lookup;


#endif
