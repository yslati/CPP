#include "ZombieEvent.hpp"



int main() {

    ZombieEvent event;
    Zombie  *z[5];
    srand(clock());
    std::string names[10] = {"Mark", "Jemmy", "Jonne", "Lucie", "Dan", "Mark", "Carl", "Jeff", "Alfred", "Stive"};

    event.setZombieType("Cool");
    for (int j = 0; j < 4 ; j++) {
        z[j] = event.newZombie(names[rand() % 10]);
        z[j]->announce();
        delete z[j];
    }

    event.setZombieType("Smart");
    for (int i = 0; i < 4 ; i++) {
        z[i] = event.randomChump();
        delete z[i];
    }

	return 0;
}