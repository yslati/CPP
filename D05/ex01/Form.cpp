#include "Form.hpp"

Form::Form() {
}

Form::Form(std::string name, int signGrade, int execGrade): _name(name), _signGrade(signGrade), _execGrade(execGrade) {
	_isSigned = false;
	if (signGrade < 150)

	else < 1
}

Form::Form(Form const & src) {
	*this = src;
	return ;
}

Form & Form::operator=(Form const & src){
	_name = src.getname();
	return *this;
}

std::string Form::getname() const {
	return _name;
}

int Form::getsignedGrade() const {
	return _signGrade;
}

int Form::getexecGrade() const {
	return _execGrade;
}

Form::~Form() {
}