#ifndef ROBOTOMYREQUESTFORM_H
# define ROBOTOMYREQUESTFORM_H

#include "Form.hpp"
#include <time.h>


class RobotomyRequestForm: public Form {
	private:
		
		
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(RobotomyRequestForm const & src);
		RobotomyRequestForm &operator=(const RobotomyRequestForm &);
		virtual ~RobotomyRequestForm();
		void	action() const;
};




#endif