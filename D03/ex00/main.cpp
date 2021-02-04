#include "FragTrap.hpp"

int		main() {

	FragTrap Amara ("Amara");
	FragTrap Moze ("Moze");
	FragTrap Jo;

	Jo = Moze;

	// Amara.vaulthunter_dot_exe("Moze");
	Moze.rangedAttack("Amara");


	return (0);
}