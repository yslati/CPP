#include "Form.hpp"

Form::Form() {
}

Form::Form(std::string name): _name(name) {
	_isSigned = false;
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

Form::~Form() {
}