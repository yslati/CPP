#include "HumanB.hpp"

HumanB::HumanB(std::string name) {
	this->_name = name;
	return ;
}

HumanB::~HumanB() {
	return ;
}

void HumanB::attack() {
	std::cout << this->_name << " attacks with his " << this->_w->getType() << std::endl;
}

void HumanB::setWeapon(Weapon& w) {
	_w = &w;
	return ;
}