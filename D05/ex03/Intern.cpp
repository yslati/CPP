#include "Intern.hpp"

Intern::Intern() {
}

Intern::Intern(Intern const & src) {
	*this = src;
}

Intern & Intern::operator=(Intern const & src){
	(void)src;
	return *this;
}

Intern::~Intern() {
}

Form* Intern::shrubberycreation(std::string const &target) {
	return (new ShrubberyCreationForm(target));
}
Form* Intern::robotomyrequest(std::string const &target) {
	return (new RobotomyRequestForm(target));
}
Form* Intern::presidentialpardon(std::string const &target) {
	return (new PresidentialPardonForm(target));
}

Form*		Intern::makeForm(std::string name, std::string target) {
	std::string allforms[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	Form* (Intern::*Forms[3])(std::string const &) = {
		&Intern::shrubberycreation,
		&Intern::robotomyrequest,
		&Intern::presidentialpardon
	};
	for (int i = 0; i < 3; i++) {
		if (allforms[i] == name) {
			std::cout << "Intern creates " << name << std::endl;
			return((this->*(Forms[i]))(target));
		}
	}
	std::cout << name <<" is not found" << std::endl;
	return NULL;
}
