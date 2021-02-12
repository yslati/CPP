/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yslati <yslati@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 10:24:55 by yslati            #+#    #+#             */
/*   Updated: 2021/02/11 17:41:36 by yslati           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "FragTrap.hpp"

int main()
{
	FragTrap alex ("Alex");
	FragTrap vasya (alex);

	alex.rangedAttack("Robot number 1");
	alex.meleeAttack("Robot number 2");

	alex.beRepaired(10);
	alex.takeDamage(90);
	alex.takeDamage(5);
	alex.vaulthunter_dot_exe("Robot  number 2");
	alex.vaulthunter_dot_exe("Robot  number 2");
	alex.vaulthunter_dot_exe("Robot  number 2");
	alex.vaulthunter_dot_exe("Robot  number 2");
	alex.vaulthunter_dot_exe("Robot  number 2");
	alex.beRepaired(10);
	alex.takeDamage(20);
	alex.beRepaired(10);
	alex.takeDamage(20);
	alex.takeDamage(20);
	alex.takeDamage(20);
	alex.takeDamage(20);
	alex.takeDamage(20);
	alex.takeDamage(15);

	std::cout << std::endl;;
	vasya.beRepaired(10);
	vasya.takeDamage(90);
	vasya.takeDamage(5);
	vasya.vaulthunter_dot_exe("Robot  number 2");
	vasya.vaulthunter_dot_exe("Robot  number 2");
	vasya.vaulthunter_dot_exe("Robot  number 2");
	vasya.vaulthunter_dot_exe("Robot  number 2");
	vasya.vaulthunter_dot_exe("Robot  number 2");
	vasya.beRepaired(10);
	vasya.takeDamage(20);
	vasya.beRepaired(10);
	vasya.takeDamage(20);
	vasya.takeDamage(20);
	vasya.takeDamage(20);
}