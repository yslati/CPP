/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yslati <yslati@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 11:53:01 by yslati            #+#    #+#             */
/*   Updated: 2021/02/15 15:16:28 by yslati           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int const Fixed::_fbits = 8;

Fixed::Fixed(): _fpnt(0) {
	std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::Fixed(int const n) { // int to fixed
	std::cout << "Int constructor called" << std::endl;
	this->_fpnt = n * (1 << this->_fbits);
	return;
}

Fixed::Fixed(float const n) { // float to fixed
	std::cout << "Float constructor called" << std::endl;
	this->_fpnt = roundf(n * ((float)(1 << this->_fbits)));
	return;
}

Fixed::Fixed(Fixed const & fix) {
	std::cout << "Copy constructor called" << std::endl;
	*this = fix;
	return;
}

int Fixed::toInt() const { // fixed to int
	return (this->_fpnt / ( 1 << this->_fbits));
}

float Fixed::toFloat() const { // fixed to float
	return ((float)this->_fpnt / (1 << this->_fbits));
}

Fixed & Fixed::operator=(Fixed const &a){
	std::cout << "Assignation operator called" << std::endl;
	this->_fpnt = roundf(a.toFloat() * (1 << this->_fbits));
	return *this;
}

std::ostream & operator<<(std::ostream &o, Fixed const &fix) {
	o << fix.toFloat();
	return o;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
	return;
}
