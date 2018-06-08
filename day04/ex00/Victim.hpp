#ifndef	VICTIM_HPP
#define VICTIM_HPP

#include <iostream>

class	Victim {
	private:
		std::string		_name;

	public
		Victim(void);
		Victim(std::string &name, std::string &title);
		Victim(const Victim &rhs);
		Victim & operator=(const Victim &rhs);
		~Victim(void);
		std::string		getName(void);
		void			getPolymorphed(void);
}

#endif
