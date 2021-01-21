#include "Pony.hpp"

Pony::Pony() {
	std::cout << "Constractor" << std::endl;
	return ;
}
Pony::~Pony() {
	std::cout << "Destractor" << std::endl;
	return ;
}

void Pony::ponyOnTheHeap() {
	std::cout << "ponyOnTheHeap" << std::endl;
}

void Pony::ponyOnTheStack() {
	std::cout << "ponyOnTheStack" << std::endl;
}