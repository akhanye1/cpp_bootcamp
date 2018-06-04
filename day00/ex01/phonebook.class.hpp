#ifndef PHONEBOOK_CLASS_HPP
#define PHONEBOOK_CLASS_HPP

#include <iostream>

class Phonebook {
    private:
		static int	_counter;
    std::string _first_name;
    std::string _last_name;
    std::string _nickname;
    std::string _login;
    std::string _postal;
    std::string _email;
    std::string _phone;
    std::string _birthdate;
    std::string _fav_meal;
    std::string _underwear_color;
    std::string _darkest_secret;

		public:
		Phonebook(void);
		void				printContact(void) const;
		static int	getCounter(void);
		void				setFirstName(Std::string firstName);
		void				setLastName(Std::string lastName);
		void				setNickname(Std::string nickname);
		void				setLogin(Std::string login);
		void				setPostal(Std::string postal);
		void				setEmail(Std::string email);
		void				setPhone(Std::string phone);
		void				setBirthdate(std::String birthdate);
		void				setfavMeal(std::String favMeal);i
		void				setUnderwear(std::String underwear);
		void				setDarkestSecret(std::String darkestSecret);
};

#endif
