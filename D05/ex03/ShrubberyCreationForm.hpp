#ifndef SHRUBBERYCREAIONFORM_H
# define SHRUBBERYCREAIONFORM_H

#include "Form.hpp"

class ShrubberyCreationForm: public Form {
	private:
		
		
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(ShrubberyCreationForm const & src);
		ShrubberyCreationForm &operator=(const ShrubberyCreationForm &);
		virtual ~ShrubberyCreationForm();
		void	action() const;
};



#endif