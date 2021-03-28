#include "Form.hpp"

Form::Form(): _name("default"), _signGrade(100), _execGrade(120) {
	_isSigned = false;
	return ;
}

Form::Form(std::string name, int signGrade, int execGrade, std::string target): _name(name), _signGrade(signGrade), _execGrade(execGrade), _target(target) {
	_isSigned = false;
	if (signGrade > 150 || execGrade > 150)
		throw GradeTooLowException();
	else if (signGrade < 1 || execGrade < 1)
		throw GradeTooHighException();
}

Form::Form(Form const & src): _name(src._name), _isSigned(src._isSigned), _signGrade(src._signGrade), _execGrade(src._execGrade), _target(src._target) {
	*this = src;
	return ;
}

Form & Form::operator=(Form const & src){
	if (this != &src)
		this->_isSigned = src._isSigned;
	return *this;
}

std::string Form::getname() const {
	return _name;
}

std::string Form::gettarget() const {
	return _target;
}

int Form::getsignedGrade() const {
	return _signGrade;
}

int Form::getexecGrade() const {
	return _execGrade;
}

bool Form::getisSigned() const {
	return _isSigned;
}

Form::~Form() {
}

const char* Form::GradeTooHighException::what() const throw() {
	return "Grade Too High";
}

const char* Form::GradeTooLowException::what() const throw() {
	return "Grade Too Low";
}

void			Form::beSigned(const Bureaucrat b) {
	int grade = b.getGrade();
	if (grade <= this->_signGrade)
		this->_isSigned = true;
	else
		throw GradeTooLowException();
}

std::ostream	&operator<<(std::ostream &o, const Form & src) {
	o << src.getname() << ", Form sign grade: " << src.getsignedGrade() << ", execution grade: " << src.getexecGrade() << ", State: ";
	if (src.getisSigned())
		o << "Signed";
	else
		o << "Unsigned";
	o << std::endl;
	return o;
}