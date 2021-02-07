/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yslati <yslati@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 14:49:18 by yslati            #+#    #+#             */
/*   Updated: 2021/02/06 12:27:46 by yslati           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int		main() {

	FragTrap Amara ("Amara");
	ScavTrap Moze ("Moze");

	ScavTrap k(Moze);

	k.meleeAttack("kkkk");
	Amara.rangedAttack("Devil");
	Amara.meleeAttack("Devil");
	Moze.challengeNewcomer();
	Amara.takeDamage(30);
	Moze.beRepaired(20);
	Amara.beRepaired(20);
	Amara.vaulthunter_dot_exe("Athena");
	Amara.takeDamage(30);
	Moze.takeDamage(30);
	Moze.rangedAttack("Athena");
	Amara.takeDamage(50);
	Moze.meleeAttack("Athena");
	Moze.takeDamage(25);
	Amara.vaulthunter_dot_exe("Athena");
	Amara.takeDamage(30);

	return (0);
}