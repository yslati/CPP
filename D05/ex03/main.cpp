#include "Intern.hpp"
int main()
{
	Intern 	someRandomIntern;
	Bureaucrat bob("Bob", 150);
	Bureaucrat max("Max", 20);
	Form 	*roboto = NULL;

	roboto = someRandomIntern.makeForm("robotomy request", "Bob");
    bob.signForm(*roboto);
    bob.executeForm(*roboto);
    max.signForm(*roboto);
    max.executeForm(*roboto);
    delete roboto;

    roboto = NULL;
	roboto = someRandomIntern.makeForm("bo3o", "Max");
    delete roboto;
	return 0;
}

