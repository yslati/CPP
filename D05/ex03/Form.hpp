#ifndef FORM_H
# define FORM_H

#include <iostream>
#include <string>
#include <exception>
#include <fstream>

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
	private:
		const std::string 	_name;
		bool				_isSigned;
		const int			_signGrade;
		const int			_execGrade;
		std::string			_target;
		
	public:
		Form();
		Form(std::string name, int signGrade, int execGrade, std::string target);
		Form(Form const & src);
		Form & operator=(Form const& src);
		virtual ~Form();

		std::string 	getname() const;
		std::string 	gettarget() const;
		int				getsignedGrade() const;
		int				getexecGrade() const;
		bool			getisSigned() const;

		void			beSigned(const Bureaucrat b);
		void			execute(Bureaucrat const & executor) const;
		virtual void	action() const = 0;


		class GradeTooHighException: public std::exception {
			public:
				virtual const char* what() const throw();
		};
		class GradeTooLowException: public std::exception {
			public:
				virtual const char* what() const throw();
		};
		class UnsignedFormException: public std::exception {
			public:
				virtual const char* what() const throw();
		};
		
};

std::ostream	&operator<<(std::ostream o, const Form & src);


#endif