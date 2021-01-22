#include "Zombie.hpp"

Zombie::~Zombie()
{
	std::cout << "Zombie " << _name << " is dead" << std::endl;
	return ;
}

void Zombie::announce() {

	std::cout << "<" << this->_name << " (" << this->_type << ")>" << " Braiiiiiiinnnssss..." << std::endl;
	return ;
}