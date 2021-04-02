#ifndef CONVERSION_H
# define CONVERSION_H

#include <iostream>
#include <string>
#include <sstream>
#include <exception>

class conversion {
	private:
		std::string		first;
		std::string		flt;
		std::string		parse_float(std::string arg);
		int				check_char(std::string str);
	public:
		conversion();
		conversion(std::string str);
		conversion(conversion const & src);
		conversion & operator=(conversion const & src);
		~conversion();

		class InvalidInput: public std::exception {
			public:
				virtual const char* what() const throw();
		};

};

#endif