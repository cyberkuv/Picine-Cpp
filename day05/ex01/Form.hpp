#ifndef FORM_HPP
# define FORM_HPP
# include "Bureaucrat.hpp"
# include <iostream>
# include <string>
# include <stdexcept>

class Form {
private:
    std::string const   name;
    bool                Signed;
    int const           gradeSign;
    int const           gradeExec;
public:
    Form( void );
    Form(Form const &form);
    Form(std::string _name, bool _signed, int _gradeSign, int _gradeExec);
    Form                &operator=(Form const &form);
    std::string         getName( void ) const;
    bool                getSigned( void ) const;
    int                 getGradeSign( void ) const;
    int                 getGradeExec( void ) const;
    void                beSigned(Bureaucrat const &bue);
    ~Form( void );

class GradeTooHighException : public std::exception {
    virtual const char * what() const throw();
};

class GradeTooLowException : public std::exception {
    virtual const char * what() const throw();
};
};

std::ostream    &operator<<(std::ostream &o, Form const &form);

#endif