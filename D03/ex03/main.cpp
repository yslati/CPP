/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yslati <yslati@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 10:26:58 by yslati            #+#    #+#             */
/*   Updated: 2021/02/14 15:36:00 by yslati           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "FragTrap.hpp"
# include "ScavTrap.hpp"
# include "NinjaTrap.hpp"


int main()
{
	FragTrap	frag;
	ScavTrap	scav;
	ClapTrap	*clap = new FragTrap ("clap");
	NinjaTrap	ninja("Ninja");

	std::string target[3] = {
		"\033[1;31mRobot number 1\033[0m",
		"\033[1;31mRobot number 2\033[0m",
		"\033[1;31mRobot number 3\033[0m"
	};

	// Ninja
	ninja.beRepaired(15);
	std::cout << "\n";
	ninja.takeDamage(15);
	std::cout << "\n";
	ninja.rangedAttack(target[0]);
	std::cout << "\n";
	ninja.ninjaShoeBox(scav);
	std::cout << "\n";

	std::cout << "\n";
	ninja.ninjaShoeBox(frag);
	std::cout << "\n";

	std::cout << "\n";
	ninja.ninjaShoeBox(*clap);
	std::cout << "\n";
	
	std::cout << "\n";
	ninja.ninjaShoeBox(ninja);
	std::cout << "\n";

	// Frag
	frag.beRepaired(15);
	std::cout << "\n";
	frag.takeDamage(15);
	std::cout << "\n";
	frag.rangedAttack(target[0]);
	std::cout << "\n";
	frag.vaulthunter_dot_exe(target[1]);
	std::cout << "\n";
	// Scav
	scav.beRepaired(15);
	std::cout << "\n";
	scav.takeDamage(15);
	std::cout << "\n";
	scav.rangedAttack(target[0]);
	std::cout << "\n";
	scav.challengeNewcomer();
	std::cout << "\n";
	// Clap
	clap->beRepaired(15);
	std::cout << "\n";
	clap->takeDamage(15);
	std::cout << "\n";
	clap->rangedAttack(target[0]);
	std::cout << "\n";

	delete clap;
}