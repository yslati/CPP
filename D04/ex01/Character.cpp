/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yslati <yslati@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 10:56:59 by yslati            #+#    #+#             */
/*   Updated: 2021/03/15 11:08:07 by yslati           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() {
	_ap = 40;
	// _name = "Default";
	_weapon = NULL;
	return;
}

Character::Character(std::string const & name) {
	_name = name;
	_ap = 40;
	_weapon = NULL;
	return;
}

Character::Character(Character const & src) {
	*this = src;
	return ;
}

Character &	Character::operator=(Character const & src) {
	_name = src.getName();
	return *this;
}

Character::~Character() {
	return;
}

void		Character::recoverAP() {
	if ((_ap += 10) > 40)
		_ap = 40;
}

void		Character::equip(AWeapon *src) {
	_weapon = src;
}

void		Character::attack(Enemy *src) {
	int life = src->getHP();

	if (_weapon && _ap > this->_weapon->getAPCost()) {
		std::cout << _name << " attacks " << src->getType() << " with a " << _weapon->getName() << std::endl;
		if (src->getHP() > 0 && _weapon->getDamage() > 0) {
			life = src->getHP() - _weapon->getDamage();
			this->_weapon->attack();
			this->_ap -= this->_weapon->getAPCost();
			if (life < 0) {
				life = 0;
				delete src;
			}
		}
		src->setHP(life);
	}
}

std::ostream	&	operator<<(std::ostream & o, Character const & src) {
	if (src.getAWeapon())
		o << src.getName() << " has a " << src.getAP() << " AP and wields a " << src.getAWeapon()->getName() << std::endl;
	else
		o << src.getName() << " has a " << src.getAP() << " AP and is unarmed" << std::endl;
	return o;
}

std::string const & Character::getName() const{
	return _name;
}
int					Character::getAP() const{
	return _ap;
}
AWeapon *Character::getAWeapon() const{
	return _weapon;
}