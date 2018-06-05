#include <iostream>
#include <string>
#include "phonebook.hpp"

int phonebook::items = 0;

void    add_contact(phonebook *contacts) {
    if (phonebook::items == 0) {
        std::cout << "Phonebook is empty" << std::endl;;
    }
}

int     main(void) {
    std::string command;
    bool        exit_function;
    phonebook   contacts[8];

    command = "start";
    exit_function = false;
    while (!exit_function) {
        std::cout << "phonebook>";
        std::getline(std::cin, command);
        if (command.compare("EXIT") == 0)
            exit_function = true;
        else if (command.compare("ADD") == 0)
            add_contact(contacts);
        std::cout << std::endl;
    }
}