#include "Sample.class.hpp"

Sample::Sample(std::string name, std::string password) {
    this->_name = name;
    this->_password = password;
    std::cout << "Constructor called" << std::endl;
    return;
}

void Sample::getName()
{
    std::cout << "Your name is: " << this->_name << std::endl;
}

Sample::~Sample(void) {

    std::cout << "Destructor called" << std::endl;
    return;
}

int     main() {

	// Sample *r = new Sample("yassin", "pass255786"); // stack + destroy everything after compile finish
    // Sample	*i = new Sample; // heap + it never destroy while you never delete class name
	// i->p();
    std::string name;
    std::string password;
    std::cout << "Enter ur name: ";
    std::cin >> name;
    std::cout << "Enter ur password: ";
    std::cin >> password;
    Sample r(name, password);
    r.getName();
	// delete r;
	return 0;
}


