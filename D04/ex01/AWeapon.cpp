/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yslati <yslati@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 11:57:07 by yslati            #+#    #+#             */
/*   Updated: 2021/02/22 15:17:33 by yslati           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(void) {
	
	return;
}

AWeapon::AWeapon(std::string const & name, int apcost, int damage) {
	_name = name;
	_apcost = apcost;
	_damage = damage;
	return;
}

AWeapon::~AWeapon() {
	return;
}

AWeapon::AWeapon(AWeapon const & src) {
	*this = src;
	return ;
}

AWeapon &	AWeapon::operator=(AWeapon const & src) {
	_name = src.getName();
	_apcost = src.getAPCost();
	_damage = src.getDamage();
	
	return *this;
}

std::string const & AWeapon::getName() const {
	return _name;
}

int AWeapon::getAPCost() const {
	return _apcost;
}
int AWeapon::getDamage() const {
	return _damage;
}