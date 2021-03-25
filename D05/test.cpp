// void	test1() {
// 	try {
// 		// do some stuff here
// 		if (1)
// 			throw std::exception();
// 		else
// 			return ;
// 			//do your shit
// 	}
// 	catch (std::exception e) {
// 		// handle the error here
// 	}
// }

// void	test2() {
// 	// Do sime stuff here
// 	if (1)
// 		throw std::exception();
// 	else
// 		return ;
// 		// do more stuff here
// }

// void	test3() {
// 	try {
// 		test2();
// 	}
// 	catch (std::exception& e) {
// 		// handle error 
// 	}
// }

// void	test4() {
// 	class PEBKACException: public std::exception {
// 		public:
// 			virtual const char *what() const throw() {
// 				return ("Problem exists between keyboeard");
// 			}
// 	};

// 	try {
// 		test3();
// 	}
// 	catch (PEBKACException& e) {
// 		// handle the fact that the user is an idiot
// 	}
// 	catch (std::exception& e) {
// 		// habdle other exception that are like std::exception
// 	}
// }

#include <iostream>
#include <exception>

// class		OverSpeed: public std::exception {
// 	int speed;
// 	public:
// 		const char* what() {
// 			return "check out your car speed \n you are in the car not in the aeroplane\n";
// 		}
// 		void	getSpeed() {
// 			std::cout << "your car speed is " << speed << std::endl;
// 		}
// 		void	setSpeed(int speed) {
// 			this->speed = speed;
// 		}
// };

// class Car {
// 	int speed;
// 	public:
// 		Car() {
// 			speed = 0;
// 			std::cout << "speed is " << speed << std::endl;
// 		}
// 		void	accelarate() {
// 			for (;;) {
// 				speed += 10;
// 				std::cout << "Speed is " << speed << std::endl;
// 				if (speed >= 250) {
// 					OverSpeed s;
// 					s.setSpeed(speed);
// 					throw s;
// 				}
// 			}
// 		}
// };

// int main () {
// 	Car tesla;
// 	try {
// 		std::cout << "here\n";
// 		tesla.accelarate();
// 	}
// 	catch (OverSpeed s) {
// 		std::cout << s.what() << std::endl;
// 		s.getSpeed();
// 	}
// 	return 0;
// }

class Test {
	public:
		class o_Exept: public std::exception {
			public:
				virtual const char* what() const throw(){
					return "Error was found";
				}
		};
		Test(int s) {
			if (s < 0)
				throw o_Exept();
			else
				_s = s;
			std::cout << "Success\n";
		}
	private:
		int _s;
};

int  main(int argc, const char** argv) {
	try {
		Test s(-9);
	} catch(Test::o_Exept & e) {
		std::cout << e.what() << std::endl;
	}
}