#ifndef INHERITANCE_H
#define INHERITANCE_H

#include <string>

class Animal {
	private:
		int		_numberOfLegs;
		
	public:
		Animal();
		Animal(Animal const & src);
		Animal & operator=(Animal const & src);
		~Animal();

		void	run(int distance);
		void	scornSomeone(std::string const & target);
		void	eat(std::string const & what);
};

class Other : public Animal {

	public:
		Other();
		Other(Other const & src);
		Other & operator=(Other const & src);
		~Other();

};

class Cat : public Animal {

	public:
		Cat();
		Cat(Cat const & src);
		Cat & operator=(Cat const & src);
		~Cat();

		void	scornSomeone(std::string const & target);
};

class Pony : public Animal {
	
	public:
		Pony();
		Pony(Pony const & src);
		Pony & operator=(Pony const & src);
		~Pony();

		void	doMagic(std::string const & target);
};


#endif