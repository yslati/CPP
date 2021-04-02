#ifndef SERIALIZATION_H
# define SERIALIZATION_H

#include <iostream>
#include <string>
#include <sstream>
#include <exception>

class Serialization {
	private:
		std::string		first;
		std::string		flt;
		std::string		parse_float(std::string arg);
		int				check_char(std::string str);
	public:
		Serialization();
		Serialization(Serialization const & src);
		Serialization & operator=(Serialization const & src);
		~Serialization();

		// class InvalidInput: public std::exception {
		// 	public:
		// 		virtual const char* what() const throw();
		// };

};

#endif