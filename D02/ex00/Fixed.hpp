#ifndef FIXED_H
# define FIXED_H

#include <iostream>

class Fixed {

	private:
		int _fpnt;
		static const int _fbits;
	
	public:
		Fixed();
		Fixed(Fixed const & fix); // copy constractor

		Fixed & operator=(Fixed const & fix);

		int getRawBits() const;

		~Fixed();
};

std::ostream & operator<<(std::ostream & o, Fixed const & f);

#endif
