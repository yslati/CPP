/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yslati <yslati@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 12:44:22 by yslati            #+#    #+#             */
/*   Updated: 2021/02/22 15:21:57 by yslati           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(void) {
	
	return;
}

Enemy::Enemy(int hp, std::string const & type) {
	_hp = hp;
	_type = type;
	return;
}

Enemy::~Enemy() {
	return;
}

Enemy::Enemy(Enemy const & src) {
	*this = src;
	return ;
}

Enemy &	Enemy::operator=(Enemy const & src) {
	_hp = src.getHP();
	_type = src.getType();
	
	return *this;
}

void		Enemy::takeDamage(int damage) {
	if (_hp <= 0 || damage <= 0)
			return;
	if (damage > _hp)
		_hp = 0;
	else
		_hp -= damage;
}

std::string const &	Enemy::getType() const {
	return _type;
}
int					Enemy::getHP() const {
	return _hp;
}
void				Enemy::setHP(int hp) {
	_hp = hp;
}
