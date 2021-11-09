#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name("")
{
	this->_grade = 150;
	std::cout << "Lowest grade Bureaucrat with no name was created." << std::endl;
}

Bureaucrat::Bureaucrat(std::string given_name, int given_grade) : _name(given_name)
{
	if (given_grade < 1 || given_grade > 150)
		throw given_grade;
	else
		this->_grade = given_grade;
	std::cout << "Bureaucrat " << this->_name << " was created." << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &b) : _name(b._name)
{
	*this = b;
	std::cout << "Bureaucrat " << this->_name << " was created via Copy Constructor." << std::endl;
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &b)
{
	if (this != &b)
		this->_grade = b._grade;
	std::cout << "Bureaucrat " << this->_name << " was created via Assignment Operator." << std::endl;
	return (*this);
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Bureaucrat was destroyed." << std::endl;
}
