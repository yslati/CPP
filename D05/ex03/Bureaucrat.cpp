#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade): _Name(name) {
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	else
		this->_Grade = grade;
	
}

Bureaucrat::Bureaucrat(const Bureaucrat & src): _Name(src._Name) {
	*this = src;
}

Bureaucrat::~Bureaucrat() {
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return "Grade Too High";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return "Grade Too Low";
}

std::string Bureaucrat::getName() const{
	return this->_Name;
}

int Bureaucrat::getGrade() const{
	return this->_Grade;
}

void	Bureaucrat::increment() {
	if (this->_Grade - 1 < 1)
		throw GradeTooHighException();
	this->_Grade -= 1;
}

void	Bureaucrat::decrement() {
	if (this->_Grade + 1 > 150)
		throw GradeTooLowException();
	this->_Grade += 1;
}

std::ostream & operator<<(std::ostream & o, Bureaucrat const & b) {
	o << b.getName() << ", bureaucrat grade " << b.getGrade() << std::endl;
	return o;
}

void		Bureaucrat::signForm(Form &src) {
	try {
		src.beSigned(*this);
		std::cout << getName() << " signs " << src.getname() << std::endl;
	} catch (std::exception &e) {
		std::cout << getName() << " cannot sign " << src.getname() << " because " << e.what() << std::endl;
	}
}

void		Bureaucrat::executeForm(Form const & form) {
	try {
		form.execute(*this);
		std::cout << this->_Name << " executes " << form.getname() << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}