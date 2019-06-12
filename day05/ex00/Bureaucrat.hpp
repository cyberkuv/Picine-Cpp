#ifndef BUREACRAT_HPP
# define BUREACRAT_HPP
# include <iostream>
# include <string>
# include <stdexcept>

class Bureaucrat {
private:
    std::string const name;
    int grade;
public:
    Bureaucrat( void );
    Bureaucrat(std::string name, int _grade);
    Bureaucrat(Bureaucrat const &bue);
    Bureaucrat  &operator=(Bureaucrat const &bue);
    std::string getName( void ) const;
    int         getGrade( void ) const;
    void        incGrade( void );
    void        decGrade( void );
    ~Bureaucrat( void );

class GradeTooHighException : public std::exception {
    virtual const char * what() const throw();
};

class GradeTooLowException : public std::exception {
    virtual const char * what() const throw();
};
};

std::ostream    &operator<<(std::ostream &o, Bureaucrat const &bue);

#endif