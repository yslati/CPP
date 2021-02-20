/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yslati <yslati@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 12:57:08 by yslati            #+#    #+#             */
/*   Updated: 2021/02/20 11:01:01 by yslati           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(void): Victim() {
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(std::string name): Victim(name) {
	_name = name;
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(Peon const & src){
	*this = src;
	return;
}

Peon	&	Peon::operator=(Peon const & src) {
	_name = src.getName();
	return *this;
}

Peon::~Peon() {
	std::cout << "Bleuark..." << std::endl;
}

void	Peon::getPolymorphed() const {
	std::cout << _name << " has been turned into a pink pony!" << std::endl;
}