#ifndef PRESIDENTIALPARDONFORM_H
# define PRESIDENTIALPARDONFORM_H

#include "Form.hpp"

class PresidentialPardonForm: public Form {
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(PresidentialPardonForm const & src);
		PresidentialPardonForm &operator=(const PresidentialPardonForm &);
		virtual ~PresidentialPardonForm();
		void	action() const;
};

#endif