/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yslati <yslati@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 14:49:18 by yslati            #+#    #+#             */
/*   Updated: 2021/02/05 14:49:19 by yslati           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int		main() {

	FragTrap Amara ("Amara");
	FragTrap Moze ("Moze");


	Amara.rangedAttack("Devil");
	Amara.meleeAttack("Devil");
	Moze.vaulthunter_dot_exe("Robot");
	Amara.takeDamage(30);
	Moze.beRepaired(20);
	Amara.beRepaired(20);
	Amara.vaulthunter_dot_exe("Athena");
	Amara.takeDamage(30);
	Moze.takeDamage(30);
	Moze.rangedAttack("Athena");
	Amara.takeDamage(50);
	Moze.meleeAttack("Athena");
	Moze.takeDamage(55);
	Amara.vaulthunter_dot_exe("Athena");
	Amara.takeDamage(30);
	Moze.takeDamage(30);

	return (0);
}