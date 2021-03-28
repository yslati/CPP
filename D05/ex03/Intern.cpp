#include "Intern.hpp"

Intern::Intern() {
}

Intern::Intern(Intern const & src) {
	*this = src;
}

Intern & Intern::operator=(Intern const & src){
	
	return *this;
}

Intern::~Intern() {
}

Form*		Intern::makeForm(std::string name, std::string target) {

}

