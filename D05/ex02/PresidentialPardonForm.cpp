#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): Form::Form("PresidentialPardonForm", 25, 5, "default") {
}

PresidentialPardonForm::~PresidentialPardonForm() {
}

PresidentialPardonForm::PresidentialPardonForm(std::string target): Form::Form("PresidentialPardonForm", 25, 5, target) {
	std::cout << target << "has been pardoned btZafod Beeblebrox" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src) {
	*this = src;
	
}
