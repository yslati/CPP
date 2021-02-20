/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yslati <yslati@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 17:39:56 by yslati            #+#    #+#             */
/*   Updated: 2021/02/20 11:10:11 by yslati           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"

int main()
{
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");
	Peon yassin("Yassin");
	Peon ayoub("Ayoub");
	std::cout << robert << jim << joe << yassin << ayoub;
	robert.polymorph(jim);
	robert.polymorph(joe);

	Peon *vikky = new Peon("Vikky");
	std::cout << *vikky << std::endl;
	delete vikky;
	return 0;
}
