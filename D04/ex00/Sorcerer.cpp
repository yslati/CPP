/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yslati <yslati@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 12:01:13 by yslati            #+#    #+#             */
/*   Updated: 2021/02/20 10:53:19 by yslati           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(void) {
	std::cout << _name << ", " << _title << ", is born!" << std::endl;
	return;
}

Sorcerer::Sorcerer(std::string name, std::string title): _name(name), _title(title) {
	std::cout << _name << ", " << _title << ", is born!" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const & src) {
	*this = src;
	return ;
}

Sorcerer & Sorcerer::operator=(Sorcerer const & src) {
	_name = src.getName();
	_title = src.getTitle();

	return *this;
}

std::ostream &	operator<<(std::ostream & o, Sorcerer const src) {
	o << "I am " << src.getName() << ", " << src.getTitle() << ", and I like ponies!" << std::endl;
	return o;
}

Sorcerer::~Sorcerer() {
	std::cout << _name << ", " << _title << ", is dead. Consequences will never be the same!" << std::endl;
}

void		Sorcerer::polymorph(Victim const & src) const {
	src.getPolymorphed();
}
