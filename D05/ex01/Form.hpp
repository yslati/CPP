#ifndef FORM_H
# define FORM_H

#include <iostream>
#include <string>
#include <exception>

class Form {
	private:
		std::string _name;
		bool		_isSigned;
		
	public:
		Form();
		Form(std::string name);
		Form(Form const & src);
		Form & operator=(Form const& src);
		~Form();

		std::string getname() const;

		
};




#endif