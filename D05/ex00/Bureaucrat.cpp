#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade): _Name(name) {
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	else
		this->_Grade = grade;
}

Bureaucrat::~Bureaucrat() {
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return "GradeTooHigh";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return "GradeTooLow";
}

std::string Bureaucrat::getName() const{
	return this->_Name;
}

int Bureaucrat::getGrade() const{
	return this->_Grade;
}

void	Bureaucrat::increment() {
	this->_Grade -= 1;
	if (this->_Grade < 1)
		throw GradeTooHighException();
}

void	Bureaucrat::decrement() {
	this->_Grade += 1;
	if (this->_Grade > 150)
		throw GradeTooLowException();
}

std::ostream & operator<<(std::ostream & o, Bureaucrat const & b) {
	o << b.getName() << ", bureaucrat grade " << b.getGrade() << std::endl;
	return o;
}
