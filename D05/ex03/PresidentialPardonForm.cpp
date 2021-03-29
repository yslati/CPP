#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): Form::Form("PresidentialPardonForm", 25, 5, "default") {
}

PresidentialPardonForm::~PresidentialPardonForm() {
}

PresidentialPardonForm::PresidentialPardonForm(std::string target): Form::Form("PresidentialPardonForm", 25, 5, target) {
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm & src) {
	(void)src;
	return *this;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src) {
	*this = src;
}

void	PresidentialPardonForm::action() const {
	std::cout << this->gettarget() << " has been pardoned btZafod Beeblebrox" << std::endl;
}