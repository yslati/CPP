#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent() {
	std::cout << "ZombieEvent on Stack\n";
}

ZombieEvent::~ZombieEvent() {
	std::cout << "ZombieEvent Dead\n";
	return ;
}

void ZombieEvent::setZombieType(std::string type) {
	this->_type = type;
}

Zombie* ZombieEvent::newZombie(std::string name) {
	Zombie	*z;
	z = new Zombie(name, gettype());
	return z;
}

Zombie *ZombieEvent::randomChump() {

    srand(clock());
    std::string names[10] = {"Mark", "Jemmy", "Jonne", "Lucie", "Dan", "Mark", "Carl", "Jeff", "Alfred", "Stive"};
    Zombie  *z;
    int     r = rand() % 10;
    z = new Zombie(names[r], gettype());
    z->announce();
    return z;
}