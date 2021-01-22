#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N) {
	std::cout << "ZombieHorde Here" << std::endl;
	if (N < 0)
		N = 0;
	Zombie *z[N];
	srand(clock());
    std::string names[10] = {"Mark", "Jemmy", "Jonne", "Lucie", "Dan", "Mark", "Carl", "Jeff", "Alfred", "Stive"};
	setZombieType("ugly");
	for (int i = 0; i < N; i++) {
		z[i] = newZombie(names[rand()%10]);
		z[i]->announce();
		delete z[i];
	}

}

ZombieHorde::~ZombieHorde() {
	std::cout << "ZombieHorde Dead" << std::endl;
	return ;
}

void ZombieHorde::setZombieType(std::string type) {
	this->_type = type;
}

Zombie* ZombieHorde::newZombie(std::string name) {
	Zombie	*z;
	z = new Zombie(name, gettype());
	return z;
}
