#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): Form::Form("RobotomyRequestForm", 72, 45, "default")  {
}

RobotomyRequestForm::~RobotomyRequestForm() {
}

RobotomyRequestForm::RobotomyRequestForm(std::string target): Form::Form("RobotomyRequestForm", 72, 45, target)  {
	srand(clock());
	std::string res[2];
	res[0] = target.append(" has been robotomized successfully");
	res[1] = target.append(" is failure");
	int i = rand() % 2;
	std::cout << res[i] << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src) {
	*this = src;
	
}
