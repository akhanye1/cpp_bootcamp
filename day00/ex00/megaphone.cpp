#include <iostream>

void    print_upper_case(char *str) {
    int i;

    i = -1;
    while (str[++i]) {
        std::cout << toupper(str[i]);
    }
}

int     main(int ac, char **av) {
    int i;

    if (ac < 2) {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (1);
    }
    i = 0;
    while (++i < ac) {
        print_upper_case(av[i]);
        if (av[i + 1])
            std::cout << " ";
    }
    std::cout << std::endl;
}