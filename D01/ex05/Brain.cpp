#include "Brain.hpp"


Brain::Brain() {
	return ;
}

Brain::~Brain() {
	return ;
}

std::string Brain::identify() const {

	std::stringstream ss;
	ss << this;
	std::string str;
	ss >> str;
	return (str);
}