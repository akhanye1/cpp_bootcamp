#ifndef PHONEBOOK_CLASS_HPP
#define PHONEBOOK_CLASS_HPP
#define MAX_CONTACTS 8
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
		void		_setName(std::string field, std::string *value);
		void		_truncate(std::string str) const;
		void		_setPhone(std::string field, std::string err,
			std::string place, std::string *value);
		bool		_numbeOk(std::string phone);

	public:
		Phonebook(void);
		static int	getCounter(void);
		void		addContact(void);
		void		viewContact(int index) const;
		void		showDetails(void) const;
};

#endif
