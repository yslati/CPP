/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yslati <yslati@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 10:28:34 by yslati            #+#    #+#             */
/*   Updated: 2021/02/22 10:45:25 by yslati           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant(void): Enemy(170, "Super Mutant") {
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
	return;
}

SuperMutant::SuperMutant(int hp, std::string const & type): Enemy(hp, type) {
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
	return;
}

SuperMutant::SuperMutant(SuperMutant const & src) {
	*this = src;
	return ;
}

SuperMutant &	SuperMutant::operator=(SuperMutant const & src) {
	SuperMutant(src.getHP(), src.getType());
	return *this;
}

SuperMutant::~SuperMutant() {
	std::cout << "Aaargh..." << std::endl;
	return;
}

void		SuperMutant::takeDamage(int damage) {
	Enemy::takeDamage(damage - 3);
}