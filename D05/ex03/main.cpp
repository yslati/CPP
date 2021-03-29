#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

void test(Bureaucrat & bur, Form & form)
{
    std::cout << "\n\033[33m" << form.getname() << "\033[0m form: " << std::endl;
    std::cout << "Signing by " << bur.getName() << std::endl;
    bur.signForm(form);
    std::cout << "Executing by " << bur.getName() << std::endl;
    bur.executeForm(form);
}

int main()
{
    Bureaucrat max("Max", 30);
    Bureaucrat henery("Henery", 1);
    Bureaucrat bob("Bob", 45);

    ShrubberyCreationForm shrub(henery.getName());
    PresidentialPardonForm pardon(bob.getName());
    RobotomyRequestForm robot(max.getName());

    std::cout << "\033[34mNormal\033[0m tests : " << std::endl;

    test(henery, shrub);
    test(bob, pardon);
    test(max, robot);

    std::cout << std::endl << "\033[34mOther\033[0m tests : " << std::endl;

    bob.decrement();
    test(bob, robot);
    max = Bureaucrat("Bob", 100);
    test(max, pardon);

    return (0);
}

