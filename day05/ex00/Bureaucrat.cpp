#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void ) : name(),
                                grade() {
    return ;
}

Bureaucrat::Bureaucrat(std::string name, int _grade) : name(name) {
    if(_grade < 1)
        throw Bureaucrat::GradeTooHighException();
    if(_grade > 150)
        throw Bureaucrat::GradeTooLowException();
    grade = _grade;
    return ;
}

Bureaucrat::Bureaucrat(Bureaucrat const &bue) {
    *this = bue;
    return ;
}

Bureaucrat&  Bureaucrat::operator=(Bureaucrat const &bue) {
    std::string &crat = const_cast < std::string & > (name);
    crat = bue.getName();
    grade = bue.getGrade();
    return *this;
}

std::string Bureaucrat::getName( void ) const {
    return name;
}

int         Bureaucrat::getGrade( void ) const {
    return grade;
}

void        Bureaucrat::incGrade( void ) {
    if(grade <= 1)
        throw Bureaucrat::GradeTooHighException();
    grade--;
}

void        Bureaucrat::decGrade( void ) {
    if(grade >= 150)
        throw Bureaucrat::GradeTooLowException();
    grade++;
}

Bureaucrat::~Bureaucrat( void ) {
    return ;
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
    return "Grades too high.";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
    return "Grades too low.";
}

std::ostream &operator<<(std::ostream &o, Bureaucrat const &bue) {
    o << bue.getName() << ", bureaucrat grade "
        << bue.getGrade() << "." << std::endl;
    return o;
}