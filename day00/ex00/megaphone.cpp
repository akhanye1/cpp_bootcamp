/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhanye <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 14:47:11 by akhanye           #+#    #+#             */
/*   Updated: 2018/06/04 16:28:58 by akhanye          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void    print_upper_case(char *str) {
    int i;

    i = -1;
    while (str[++i]) {
        str[i] = toupper(str[i]);
    }
    std::cout << str;
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
    }
    std::cout << std::endl;
	return (0);
}
