#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): Form::Form("RobotomyRequestForm", 72, 45, "default")  {
}

RobotomyRequestForm::~RobotomyRequestForm() {
}

RobotomyRequestForm::RobotomyRequestForm(std::string target): Form::Form("RobotomyRequestForm", 72, 45, target)  {
	
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src) {
	*this = src;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm & src) {
	(void)src;
	return *this;
}

void		RobotomyRequestForm::action() const {
	srand(clock());
	std::string res[2];
	res[0] = this->gettarget().append(" has been robotomized successfully");
	res[1] = this->gettarget().append(" is failure");
	int i = rand() % 2;
	std::cout << "drill drill drill drill" << std::endl;
	std::cout << "drill drill drill drill" << std::endl;
	std::cout << res[i] << std::endl;
}