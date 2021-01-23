#include "Human.hpp"

Human::Human() : b(*(new Brain()))
{
	// Brain *b = new Brain();
	// this->b = *b;
	return ;
}

Human::~Human() {
	return ;
}

std::string Human::identify() {
	return (this->b.identify());
}

Brain Human::getBrain() const{
	return b;
}

