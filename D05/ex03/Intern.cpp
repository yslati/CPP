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

Form*		Intern::makeForm(std::string name, std::string target) {
	std::string allforms[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	int i = 3;
	while (--i >= 0) {
		if (name == allforms[i])
			break;
	}
	if (i < 0)
		std::cout << name <<" is not found" << std::endl;
	else {
		std::cout << "Intern creates " << name << std::endl;
		switch (i) {
			case 0:
				return new ShrubberyCreationForm(target);
			case 1:
				return new RobotomyRequestForm(target);
			case 2:
				return new PresidentialPardonForm(target);
		}
	}
	return NULL;
}

