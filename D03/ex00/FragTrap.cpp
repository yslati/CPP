#include "FragTrap.hpp"


int		FragTrap::_MaxHitPoints = 100;
int		FragTrap::_MaxEnergyPoints = 100;
int		FragTrap::_MeleeAttackDamage = 30;
int		FragTrap::_RangedAttackDamage = 20;
int		FragTrap::_ArmorDamageReduction = 5;

FragTrap::FragTrap() {
	_Level = 1;
	_HitPoints = _MaxHitPoints;
	_HitPoints = _MaxEnergyPoints;
	std::cout << "FR4G-TP " << "Claptrap -- start bootup sequence." << std::endl;
	return;
}

FragTrap::FragTrap(std::string name): _name(name) {
	_Level = 1;
	_HitPoints = _MaxHitPoints;
	_HitPoints = _MaxEnergyPoints;
	std::cout << "FR4G-TP " << _name << " Enter The Fight !!" << std::endl;
	return;
}

FragTrap::FragTrap(FragTrap const & src) {
	_Level = src._Level;
	_HitPoints = src._MaxHitPoints;
	_HitPoints = src._MaxEnergyPoints;
	_name = src._name;
	*this = src;
	std::cout << "FR4G-TP " << "Look out everybody! Things are about to get awesome!" << std::endl;
	return;
}

FragTrap & FragTrap::operator=(FragTrap const & src) {
	_Level = src._Level;
	_HitPoints = src._MaxHitPoints;
	_HitPoints = src._MaxEnergyPoints;
	std::cout << "FR4G-TP " << src._name << " is giving the Power to " << _name << std::endl;
	return *this;
}

FragTrap::~FragTrap() {
	std::cout << "FR4G-TP " << _name << " dead !!" << std::endl;
	return;
}



void		FragTrap::rangedAttack(std::string const & target) {
	std::cout << "FR4G-TP " << _name << " attacks " << target << " at range, causing " << _RangedAttackDamage << " points of damage!" << std::endl;
}
void		FragTrap::meleeAttack(std::string const & target) {
	std::cout << "FR4G-TP " << _name << " attacks " << target << " at range, causing " << _MeleeAttackDamage << " points of damage!, HAHAHA Take that!" << std::endl;
	std::cout << "           Take that!" << std::endl;
}



void		FragTrap::takeDamage(unsigned int amount) {

	if (_HitPoints + _ArmorDamageReduction - amount <= 0) {
		_HitPoints = 0;
		std::cout << "FR4G-TP " << "Yessss, look into my eyes. You're getting sleepy. You're getting... zzzzzz... Zzzzzz..." << std::endl;
	}
	else {
		_HitPoints = _HitPoints + _ArmorDamageReduction - amount;
		std::cout << "FR4G-TP " << "I can't feel my fingers! Gah! I don't have any fingers!" << std::endl;
	}

}
void		FragTrap::beRepaired(unsigned int amount) {

	if (_HitPoints + amount <= 100) {
		_HitPoints += amount;
		std::cout << "FR4G-TP " << "Health! Eww, what flavor is red?" << std::endl;
	}
	else {
		std::cout << "FR4G-TP " << "Oh i can't handle all this power !!" << std::endl;
	}
}



void		FragTrap::Funzerker(std::string const & target) {
	std::cout << "FR4G-TP " << _name << " Attacks " << target << " : I'm a sexy dinosaur! Rawr!" << std::endl;
}

void		FragTrap::MeatUnicycle(std::string const & target) {
	std::cout << "FR4G-TP " << _name << " Attacks " << target << " : I AM ON FIRE!!! OH GOD, PUT ME OUT!!!" << std::endl;
}

void		FragTrap::Blightbot(std::string const & target) {
	std::cout << "FR4G-TP " << _name << " Attacks " << target << " : Aww, I should've drawn tattoos on you!" << std::endl;

}

void		FragTrap::Mechromagician(std::string const & target) {
	std::cout << "FR4G-TP " << _name << " Attacks " << target << " : Anarchy and mini-trap and awesomeness, oh my!" << std::endl;
}

void		FragTrap::Miniontrap(std::string const & target) {
	std::cout << "FR4G-TP " << _name << " Attacks " << target << " : Ratattattattatta! Powpowpowpow! Powpowpowpow! Pew-pew, pew-pew-pewpew!" << std::endl;
}

void		FragTrap::vaulthunter_dot_exe(std::string const & target) {

	srand(clock());
	std::cout << "FR4G-TP " << "Hey everybody, check out my package!" << std::endl;
	typedef void (FragTrap::*Weapons)(std::string const & target);
	Weapons weapons[5] = {&FragTrap::Funzerker, &FragTrap::MeatUnicycle, &FragTrap::Blightbot, &FragTrap::Mechromagician, &FragTrap::Miniontrap};
	(this->*(weapons[rand() % 5]))(target);

}