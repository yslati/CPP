#include "AssaultTerminator.hpp"
#include "ISpaceMarine.hpp"
#include "ISquad.hpp"
#include "Squad.hpp"
#include "TacticalMarine.hpp"

int main() {
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	ISquad* vlc = new Squad;
	ISquad* vlc2 = new Squad;
	vlc->push(bob);
	vlc->push(jim);
	vlc2 = vlc;
	std::cout << "hey\n";
	ISpaceMarine *cur = vlc->getUnit(0);
	ISpaceMarine *cur1 = vlc->getUnit(1);
	cur->battleCry();
	cur1->battleCry();
	vlc->push(jim);
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	
	std::cout << "====\n";

	for (int i = 0; i < vlc2->getCount(); ++i)
	{
		ISpaceMarine* cur2 = vlc2->getUnit(i);
		cur2->battleCry();
		cur2->rangedAttack();
		cur2->meleeAttack();
	}
	delete vlc;
	
	return 0;
}
