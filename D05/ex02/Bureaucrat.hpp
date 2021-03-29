#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

#include <iostream>
#include <string>
#include <exception>

#include "Form.hpp"

class Form;

class Bureaucrat{
	private:
		std::string _Name;
		int			_Grade;

	public:
		class GradeTooHighException: public std::exception {
			public:
				virtual const char* what() const throw();
		};
		class GradeTooLowException: public std::exception {
			public:
				virtual const char* what() const throw();
		};
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const & src);
		~Bureaucrat();

		void		signForm(Form &src);
		void		executeForm(Form const & form);

		void	increment();
		void	decrement();
		std::string	getName() const;
		int			getGrade() const;
};

std::ostream & operator<<(std::ostream & o, Bureaucrat const & b);

#endif