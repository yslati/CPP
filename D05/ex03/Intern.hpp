#ifndef INTERN_H
# define INTERN_H

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Form;

class Intern {
	private:
		
	public:
		Intern();
		Intern(Intern const & src);
		Intern & operator=(Intern const & src);
		~Intern();

		Form	*makeForm(std::string name, std::string target);
};



#endif