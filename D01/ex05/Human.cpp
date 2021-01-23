#include "Human.hpp"

Human::Human() {
	return ;
}

Human::~Human() {
	return ;
}

std::string Human::identify() const {
	return (this->b.identify());
}

Brain const &Human::getBrain() const{
	return b;
}

