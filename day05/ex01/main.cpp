#include "Bureaucrat.hpp"
#include "Form.hpp"

int     main(void){
    Bureaucrat  a("Emmanuel", 1);
    Bureaucrat  c("lisa", 10);
    Form        form1("Form-A", true, 137, 5);
	Form		form2("Form-B", false, 137, 5);

    std::cout << a;
    std::cout << c;

    try {
        form1.beSigned(c);
        form1.beSigned(a);
        form2.beSigned(a);
    } catch (const std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
}