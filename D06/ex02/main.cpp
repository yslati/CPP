#include <iostream>
#include <ctime>

class Base {
	public:
		virtual ~Base() {}
};

class A: public Base {};
class B: public Base {};
class C: public Base {};


Base* generate(void) {
	Base *r_obj[3];

	r_obj[0] = new A();
	r_obj[1] = new B();
	r_obj[2] = new C();
	return (r_obj[rand() % 3]);
}

void identify_from_pointer(Base * p) {
	std::string output[3] = {"A", "B", "C"};

	A * a = dynamic_cast<A*>(p);
	B * b = dynamic_cast<B*>(p);
	C * c = dynamic_cast<C*>(p);

	if (a)
		std::cout << output[0] << std::endl;
	if (b)
		std::cout << output[1] << std::endl;
	if (c)
		std::cout << output[2] << std::endl;
}

void identify_from_reference(Base & p) {
	try {
		A &a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "A" << std::endl;
	} catch (std::bad_cast &w) {
		
	}

	try {
		B &b = dynamic_cast<B&>(p);
		(void)b;
		std::cout << "B" << std::endl;
	} catch (std::bad_cast &w) {
		
	}

	try {
		C &c = dynamic_cast<C&>(p);
		(void)c;
		std::cout << "C" << std::endl;
	} catch (std::bad_cast &w) {
		
	}
}

int main() {

	srand(clock());
	Base *b = generate();
	identify_from_pointer(b);
	identify_from_reference(*b);
	// std::cout << "=================" << std::endl;
	// Base *c = generate();
	// identify_from_pointer(c);
	// identify_from_reference(*c);
	// std::cout << "=================" << std::endl;
	// Base *d = generate();
	// identify_from_pointer(d);
	// identify_from_reference(*d);
	// std::cout << "=================" << std::endl;

	return 0;
}
