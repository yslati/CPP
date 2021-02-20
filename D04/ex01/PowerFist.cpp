/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yslati <yslati@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 12:28:49 by yslati            #+#    #+#             */
/*   Updated: 2021/02/20 12:32:02 by yslati           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist(void): AWeapon( "Power Fist", 8, 50) {
	return;
}

PowerFist::PowerFist(std::string const & name, int apcost, int damage): AWeapon(name, apcost, damage) {
	return;
}

PowerFist::PowerFist(PowerFist const & src) {
	*this = src;
	return ;
}

PowerFist &	PowerFist::operator=(PowerFist const & src) {
	PowerFist(src.getName(), src.getAPCost(), src.getAPCost());
	return *this;
}

PowerFist::~PowerFist() {
	return;
}
