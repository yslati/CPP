#include "Fixed.hpp"

Fixed::Fixed(): _n(0) {

	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(int const n): _n(n) {
	std::cout << "Parametric Constractor called" << std::endl;
	return ;
}

Fixed::Fixed(Fixed const & fix) {
	std::cout << "Copy constructor called" << std::endl;
	*this = fix;
	return ;
}

int		Fixed::getRawBits() const {
	std::cout << "getRawBits member function called" << std::endl;
	return this->_n;
}

Fixed & Fixed::operator=(Fixed const & fix) {
	std::cout << "Assignation operator called" << std::endl;

	if (this != &fix)
		this->_n = fix.getRawBits();
	return *this;
}

std::ostream &	operator<<(std::ostream & o, Fixed const & f) {
	o << "The value of _n is : " << f.getRawBits() << std::endl;;
	return o;
}

Fixed::~Fixed() {
	std::cout << "Destractor Called" << std::endl;
	return ;
}