/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yslati <yslati@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 10:25:20 by yslati            #+#    #+#             */
/*   Updated: 2021/02/11 17:41:36 by yslati           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

int main()
{
	FragTrap alex ("Alex");
	ScavTrap scav ("Rock");

	// Alex
	alex.meleeAttack("Robot number1");
	alex.beRepaired(10);
	alex.vaulthunter_dot_exe("Robot number2");
	alex.rangedAttack("Robot number3");
	std::cout << "alex life is " << alex.getPoints() << std::endl;
	alex.takeDamage(15);
	std::cout << "alex life is " << alex.getPoints() << std::endl;
	std::cout << "\n\n============================================================\n" << std::endl;
	// Scav
	scav.beRepaired(52);
	scav.takeDamage(50);
	scav.challengeNewcomer();
	alex.takeDamage(20);
	alex.beRepaired(10);
	alex.takeDamage(20);
	alex.takeDamage(20);
	alex.takeDamage(20);
	alex.takeDamage(20);
	alex.takeDamage(20);
	alex.takeDamage(15);
	std::cout << std::endl;
	return 0;
}