#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

#include <iostream>

class Sample {
	public:
		Sample(std::string name, std::string password);
		void getName();
		~Sample();
	private:
		std::string _name;
		std::string _password;
};

#endif