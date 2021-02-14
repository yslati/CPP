/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yslati <yslati@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 10:26:16 by yslati            #+#    #+#             */
/*   Updated: 2021/02/14 15:35:49 by yslati           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "FragTrap.hpp"
# include "ScavTrap.hpp"


int main()
{
	FragTrap	frag;
	ScavTrap	scav("Scav");
	ClapTrap *clap = new ScavTrap("Scav");

	std::string target[3] = {
		"\033[1;31mRobot number 1\033[0m",
		"\033[1;31mRobot number 2\033[0m",
		"\033[1;31mRobot number 3\033[0m"
	};

	// // Frag
	frag.beRepaired(15);
	std::cout << "\n";
	frag.takeDamage(15);
	std::cout << "\n";
	frag.rangedAttack(target[0]);
	std::cout << "\n";
	frag.vaulthunter_dot_exe(target[1]);
	std::cout << "\n";

	// // Scav
	scav.beRepaired(15);
	std::cout << "\n";
	scav.takeDamage(15);
	std::cout << "\n";
	scav.rangedAttack(target[0]);
	std::cout << "\n";
	scav.challengeNewcomer();
	std::cout << "\n";
	std::cout << "\n";
	std::cout << "\n";
	std::cout << "\n";

	clap->rangedAttack(target[0]);

	delete clap;
}