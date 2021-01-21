#include "header.hpp"

book::book() {
	std::cout << "constractor called" << std::endl;
	return ;
}

void book::add() {
	std::cout << "ADD" << std::endl;
}

void book::search() {
	std::cout << "SEARCH" << std::endl;

}

void book::exit() {
	std::cout << "EXIT" << std::endl;
	std::exit(0);
}

void check_cmd(std::string cmd) {
	if (cmd == "ADD")
		// add();
	else if (cmd == "SEARCH")
		// search();
	else if (cmd == "EXIT")
		// exit();
	else
		std::cout << "wrong command" << std::endl;
}

book::~book() {
	std::cout << "Desctractor called" << std::endl;
	return ;
}

int		main(void) {
	book b[8];
	std::string input;

	while (true) {
		std::getline(std::cin, input, "\n");

		check_cmd(input);
	}

	return 0;
}
