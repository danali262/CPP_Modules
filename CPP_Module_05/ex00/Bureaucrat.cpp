#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name("")
{
	this->_grade = 150;
	// std::cout << "Lowest grade Bureaucrat with no name was created." << std::endl;
}

Bureaucrat::Bureaucrat(std::string given_name, int given_grade) : _name(given_name)
{
	if (given_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (given_grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade = given_grade;
	// std::cout << "Bureaucrat " << this->_name << " was created." << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &b) : _name(b._name)
{
	*this = b;
	// std::cout << "Bureaucrat " << this->_name << " was created via Copy Constructor." << std::endl;
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &b)
{
	if (this != &b)
		this->_grade = b._grade;
	// std::cout << "Bureaucrat " << this->_name << " was created via Assignment Operator." << std::endl;
	return (*this);
}

std::string	Bureaucrat::getName(void) const
{
	return (this->_name);
}

int			Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

int			Bureaucrat::incrementGrade(void)
{
	this->_grade -= 1;
	if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowException();
	std::cout	<< "Bureaucrat's " << this->_name 
				<< " grade was incremented to " << this->_grade
				<< std::endl;
	return (this->_grade);
}

int			Bureaucrat::decrementGrade(void)
{
	this->_grade += 1;
	if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowException();
	std::cout	<< "Bureaucrat's " << this->_name 
				<< " grade was decremented to " << this->_grade
				<< std::endl;
	return (this->_grade);
}

Bureaucrat::~Bureaucrat(void)
{
	// std::cout << "Bureaucrat " << this->_name << " was destroyed." << std::endl;
}

std::ostream	&operator<<(std::ostream &out, const Bureaucrat &b)
{
	out << b.getName() << ", bureaucrat grade " << b.getGrade();
	return (out);
}
