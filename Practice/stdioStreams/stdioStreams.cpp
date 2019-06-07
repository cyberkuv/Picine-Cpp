#include <iostream>

int     main(void){
    char charac[51];

    std::cout << "Insert A Word" << std::endl;
    std::cin >> charac;
    std::cout << "Heres what was entered: [" << charac << "]." << std::endl;

    return 0;
}