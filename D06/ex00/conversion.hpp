#ifndef CONVERSION_H
# define CONVERSION_H

#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <limits>
#include <exception>

class conversion {
	private:
		std::string		_first;
		std::string		_flt;
		std::string		_parse_float(std::string arg);
		int				_check_char(std::string str);
		bool			_isScientific();
		void			_printdata();

		double			_data;
		void			_toChar();
		void			_toFloat();
		void			_toDouble();
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