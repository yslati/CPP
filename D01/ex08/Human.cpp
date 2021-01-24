#include "Human.hpp"


void Human::action(std::string const & action_name, std::string const & target) {

	std::string action_str[3] = {"meleeAttack", "rangedAttack", "intimidatingShout"};
	typedef void (Human::*Actions)(std::string const & target);
	Actions actions[3] = {&Human::meleeAttack, &Human::rangedAttack, &Human::intimidatingShout};

	for (int i = 0; i < 3; i++) {
		if (action_str[i] == action_name)
			(this->*(actions[i]))(target);
	}
}