/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yslati <yslati@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 12:07:07 by yslati            #+#    #+#             */
/*   Updated: 2021/02/22 12:12:55 by yslati           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(void): AWeapon( "Plasma Rifle", 5, 21) {
	return;
}

PlasmaRifle::PlasmaRifle(std::string const & name, int apcost, int damage): AWeapon(name, apcost, damage) {
	return;
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const & src) {
	*this = src;
	return ;
}

PlasmaRifle &	PlasmaRifle::operator=(PlasmaRifle const & src) {
	PlasmaRifle(src.getName(), src.getAPCost(), src.getAPCost());
	return *this;
}

PlasmaRifle::~PlasmaRifle() {
	return;
}

void		 PlasmaRifle::attack() const {
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
