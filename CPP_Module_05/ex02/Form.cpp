#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(void) : f_name(""), f_grade_sign(150), f_grade_exec(150)
{
	this->f_signed = false;
	// std::cout << "Lowest grade form with no name was created." << std::endl;
}

Form::Form(std::string given_name, int given_grade_sign, int given_grade_exec) : f_name(given_name), f_grade_sign(given_grade_sign), f_grade_exec(given_grade_exec)
{
	if (given_grade_sign < 1 || given_grade_exec < 1)
		throw Form::GradeTooHighException();
	else if (given_grade_sign > 150 || given_grade_exec > 150)
		throw Form::GradeTooLowException();
	else
		this->f_signed = false;
	// std::cout << "Form " << this->f_name << " was created." << std::endl;
	// std::cout << "Signature grade needed: " << this->f_grade_sign << std::endl;
	// std::cout << "Execution grade needed: " << this->f_grade_exec << std::endl;
}

Form::Form(const Form &f) : f_name(f.f_name), f_grade_sign(f.f_grade_sign), f_grade_exec(f.f_grade_exec)
{
	*this = f;
	// std::cout << "Form " << this->f_name << " was created via Copy Constructor." << std::endl;
}

Form	&Form::operator=(const Form &f)
{
	if (this != &f)
		this->f_signed = f.f_signed;
	// std::cout << "Form " << this->f_name << " was created via Assignment Operator." << std::endl;
	return (*this);
}

std::string	Form::getName(void) const
{
	return (this->f_name);
}

bool		Form::getStatus(void) const
{
	return (this->f_signed);
}

int			Form::getGradeSign(void) const
{
	return (this->f_grade_sign);
}

int			Form::getGradeExec(void) const
{
	return (this->f_grade_exec);
}

void		Form::beSigned(Bureaucrat const &b)
{
	if (b.getGrade() > this->f_grade_sign)
		throw Form::GradeTooLowException();
	else
		this->f_signed = true;
	std::cout << "Form " << this->f_name << " signed by " << b.getName() << "." << std::endl;
}

void		Form::execute(Bureaucrat const &executor)
{
	if (this->f_signed == false)
		throw Form::NotSignedException();
	if (executor.getGrade() > this->f_grade_exec)
		throw Form::GradeTooLowException();
}

Form::~Form(void)
{
	// std::cout << "Form " << this->f_name << " was destroyed." << std::endl;
}

std::ostream	&operator<<(std::ostream &out, const Form &f)
{
	out << "Form name: " << f.getName() << "\t\t" 
		<< "Signed: " << f.getStatus() << "\t\t"
		<< "Required grade for signature: " << f.getGradeSign() << "\t\t"
		<< "Required grade for execution: " << f.getGradeExec() << std::endl; 
	return (out);
}
