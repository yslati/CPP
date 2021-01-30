#ifndef FIXED_H
# define FIXED_H

#include <iostream>
#include <cmath>

class Fixed {

	private:
		int _fpnt;
		static const int _fbits;

	public:
		Fixed(void);
		Fixed(int const n);
		Fixed(float const n);
		Fixed(Fixed const &fix);
		Fixed & operator=(Fixed const &a);
		int		toInt() const;
		float	toFloat() const;
		~Fixed(void);
};

std::ostream & operator<<(std::ostream & o, Fixed const & fix);

#endif