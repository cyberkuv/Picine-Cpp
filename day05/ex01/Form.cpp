#include "Form.hpp"

Form::Form( void ) : name("none"),
                    Signed(false),
                    gradeSign(150),
                    gradeExec(150) {
    return ;
}

Form::Form(Form const &form) : gradeSign(form.getGradeSign()),
                            gradeExec(form.getGradeExec()) {
    *this = form;
    return ;
}

Form::Form(std::string _name, bool _signed,
    int _gradeSign, int _gradeExec) : name(_name),
                                    Signed(_signed),
                                    gradeSign(_gradeSign),
                                    gradeExec(_gradeExec) {
    if(_gradeSign < 1 || _gradeExec < 1)
        throw Form::GradeTooHighException();
    if(_gradeSign > 150 || _gradeExec > 150)
        throw Form::GradeTooLowException();
    return ;
}

Form            &Form::operator=(Form const &form) {
    Signed = form.getSigned();
    return *this;
}

std::string     Form::getName( void ) const {
    return name;
}

bool            Form::getSigned( void ) const {
    return Signed;
}

int             Form::getGradeSign( void ) const {
    return gradeSign;
}

int             Form::getGradeExec( void ) const {
    return gradeExec;
}

void            Form::beSigned(Bureaucrat const &bue) {
    if(bue.getGrade() > gradeSign)
        throw Form::GradeTooLowException();
    bue.signTheForm(name, Signed);
    if(!Signed)
        Signed = true;
    return ;
}

Form::~Form( void ) {
    return ;
}

const char* Form::GradeTooHighException::what() const throw() {
    return "Grade Too High.";
}

const char* Form::GradeTooLowException::what() const throw() {
    return "Grade Too Low.";
}

// Describing the state of the form
std::ostream    &operator<<(std::ostream &o, Form const &form) {
    if (form.getSigned())
        o << form.getName() << " is signed.";
	else 
        o << form.getName() << " is not signed.";
	    o << "Required grade to sign - "
		    << form.getGradeSign()
		    << ". Required grade to execute - "
		    << form.getGradeExec() << std::endl;
	return o;
}