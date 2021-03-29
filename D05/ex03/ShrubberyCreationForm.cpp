#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): Form::Form("ShrubberyCreationForm", 145, 137, "default") {
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): Form::Form("ShrubberyCreationForm", 145, 137, target) {
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src) {
	*this = src;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm & src) {
	(void)src;
	return *this;
}

void	ShrubberyCreationForm::action() const {
	std::string  fileName = this->gettarget().append("_shrubbery");
	std::ofstream file(fileName);
	if (!file.good()) {
		std::cout << "Can't create the file" << std::endl;
		return ;
	}
	file << "       **** \n     ******** \n    **  ****** \n     *   ******     ****** \n         ******   ********* \n          ****  *****   *** \n          ***  ***     ** \n    *************       * \n  ****************** \n *****   H*****H******* \n ***     H-___-H  ********* \n  ***    H     H      ******* \n   **    H-___-H        ***** \n     *   H     H         **** \n         H     H         *** \n         H-___-H         ** \n         H     H         * \n         H-___-H \n         ALOHA!!" << std::endl;
	file.close();
}