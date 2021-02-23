#include "AssaultTerminator.hpp"
#include "ISpaceMarine.hpp"
#include "ISquad.hpp"
#include "Squad.hpp"
#include "TacticalMarine.hpp"

int main() {
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	ISquad* vlc = new Squad;
	vlc->push(bob);
	// std::cout << "hey\n";
	vlc->push(jim);
	// std::cout << "hey2\n";
	// ISpaceMarine *cur = vlc->getUnit(0);
	// ISpaceMarine *cur1 = vlc->getUnit(1);
	// cur->battleCry();
	// cur1->battleCry();
	vlc->push(jim);
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	delete vlc;
	return 0;
}
