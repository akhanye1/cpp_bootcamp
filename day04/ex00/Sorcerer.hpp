#ifndef	SORCERER_HPP
#define SORCERER_HPP

#include <iostream>

class	Sorcerer {
	private:
		std::string		_name;
		std::string		_title;

	public
		Sorcerer(void);
		Sorcerer(std::string &name, std::string &title);
		Sorcerer(const Sorcerer &rhs);
		Sorcerer & operator=(const Sorcerer &rhs);
		~Sorcerer(void);
		std::string		getName(void);
		std::string		getTitle(void);
		void			polymorph(Victim const &);
}

#endif
