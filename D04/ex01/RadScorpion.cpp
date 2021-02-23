/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yslati <yslati@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 10:49:27 by yslati            #+#    #+#             */
/*   Updated: 2021/02/22 11:00:58 by yslati           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion(void): Enemy(80, "RadScorpion") {
	std::cout << "* click click click *" << std::endl;
	return;
}

RadScorpion::RadScorpion(int hp, std::string const & type): Enemy(hp, type) {
	std::cout << "* click click click *" << std::endl;
	return;
}

RadScorpion::RadScorpion(RadScorpion const & src) {
	*this = src;
	return ;
}

RadScorpion &	RadScorpion::operator=(RadScorpion const & src) {
	RadScorpion(src.getHP(), src.getType());
	return *this;
}

RadScorpion::~RadScorpion() {
	std::cout << "* SPROTCH *" << std::endl;
	return;
}