/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yslati <yslati@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 11:52:52 by yslati            #+#    #+#             */
/*   Updated: 2021/01/30 11:52:53 by yslati           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int const	Fixed::_fbits = 8;

Fixed::Fixed(): _fpnt(0) {

	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(Fixed const & fix)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fix;
	return ;
}

int		Fixed::getRawBits() const {
	std::cout << "getRawBits member function called" << std::endl;
	return this->_fpnt;
}

Fixed & Fixed::operator=(Fixed const & fix) {
	std::cout << "Assignation operator called" << std::endl;

	if (this != &fix)
		this->_fpnt = fix.getRawBits();
	return *this;
}

std::ostream &	operator<<(std::ostream & o, Fixed const & f) {
	o  << f.getRawBits();
	return o;
}

Fixed::~Fixed() {
	std::cout << "Destractor Called" << std::endl;
	return ;
}
