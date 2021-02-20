/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yslati <yslati@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 12:44:22 by yslati            #+#    #+#             */
/*   Updated: 2021/02/20 12:56:31 by yslati           ###   ########.fr       */
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