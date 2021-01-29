#ifndef FIXED_H
# define FIXED_H

#include <iostream>

static const int cot = 8;

class Fixed {

	private:
		int _n;
	
	public:
		Fixed();
		Fixed(int const n);
		Fixed(Fixed const & fix); // copy constractor

		Fixed & operator=(Fixed const & fix);

		int getRawBits() const;

		~Fixed();
};

std::ostream & operator<<(std::ostream & o, Fixed const & f);

#endif