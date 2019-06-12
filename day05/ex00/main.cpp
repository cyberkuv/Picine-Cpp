#include "Bureaucrat.hpp"

int     main(void){
    Bureaucrat a("Emmanuel", 1);
    Bureaucrat c("lisa", 150);

    std::cout << a;
    std::cout << c;

    try {
        a.incGrade();
        c.decGrade();
    } catch (const std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
}