#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>

class phonebook {
    private:
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string login;
    std::string postal;
    std::string email;
    std::string phone;
    std::string birthdate;
    std::string fav_meal;
    std::string underwear_color;
    std::string darkest_secret;

    public:
    static int  items;
    void        add_first_name(std::string fist);
};

#endif