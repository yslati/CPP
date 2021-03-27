#ifndef FORM_H
# define FORM_H

#include <iostream>
#include <string>
#include <exception>

#include <Bureaucrat.hpp>

class Bureaucrat;

class Form {
	private:
		const std::string 	_name;
		bool				_isSigned;
		const int			_signGrade;
		const int			_execGrade;
		
	public:
		Form();
		Form(std::string name, int signGrade, int execGrade);
		Form(Form const & src);
		Form & operator=(Form const& src);
		~Form();

		std::string getname() const;
		int			getsignedGrade() const;
		int			getexecGrade() const;


		class GradeTooHighException: public std::exception {
			public:
				virtual const char* what() const throw();
		};
		class GradeTooLowException: public std::exception {
			public:
				virtual const char* what() const throw();
		};
		
};

std::ostream	&operator<<(std::ostream o, const Form & src);


#endif