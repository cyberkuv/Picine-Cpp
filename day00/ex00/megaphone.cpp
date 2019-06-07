#include <iostream>

void    megaphone(int argc, char *argv[]){
    for(int x = 1; x < argc; x++){
        for(int y = 0; y < (int)strlen(argv[x]); y++){
            std::cout << (char)toupper(argv[x][y]);
        }
        std::cout << " ";
    }
    std::cout << std::endl;
}

int     main(int argc, char *argv[]){
    if (argc > 1){
        megaphone(argc, argv);
    } else {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    }
    return 0;
}