#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& w): _name(name), _w(w) {
	return ;
}

HumanA::~HumanA() {
	return ;
}

void HumanA::attack() {
	std::cout << this->_name << " attacks with his " << this->_w.getType() << std::endl;
}
