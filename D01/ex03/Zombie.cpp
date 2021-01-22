#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type): _name(name), _type(type) {
	std::cout << "Zombie " << this->_name << " is born" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Zombie " << this->_name << " is dead" << std::endl;
	return ;
}

void Zombie::announce() {

	std::cout << "<" << this->_name << " (" << this->_type << ")>" << " Braiiiiiiinnnssss..." << std::endl;
	return ;
}