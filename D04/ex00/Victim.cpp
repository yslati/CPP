/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yslati <yslati@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 12:34:56 by yslati            #+#    #+#             */
/*   Updated: 2021/02/20 10:37:19 by yslati           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(void) {
	std::cout << "Some random victim called " << _name << " just appeared!" << std::endl;
}

Victim::Victim(std::string name): _name(name) {
	std::cout << "Some random victim called " << _name << " just appeared!" << std::endl;
}

std::ostream & operator<<(std::ostream &o, Victim const &src) {
	o << "I'm " << src.getName() << " and I like otters!" << std::endl;
	return o;
}

Victim::~Victim() {
	std::cout << "Victim " << _name << " just died for no apparent reason!" << std::endl;
}

void		Victim::getPolymorphed() const {
	std::cout << _name << " has been turned into a cute little sheep!" << std::endl;
}