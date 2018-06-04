/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhanye <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 16:36:32 by akhanye           #+#    #+#             */
/*   Updated: 2018/06/04 16:40:06 by akhanye          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "phonebook.hpp"

void    add_contact(phonebook contacts) {
    if (contacts::items == 0) {
        std::cout << "Phonebook is empty" << std::endl;
    }
}

int     main(void) {
    std::string command;
    bool        exit_function;
    phonebook   contacts[8];

    command = "start";
    contacts::items = 0;
    exit_function = false;
    while (!exit_function) {
        std::cout << "phonebook>";
        std::getline(std::cin, command);
        if (command.compare("EXIT") == 0)
            exit_function = true;
        else if (command.compare("ADD") == 0)
            add_contact(contacts)
        std::cout << std::endl;
    }
}
