
#include "Sorcerer.hpp"

Sorcerer::Sorcerer(void) {
}

Sorcerer::Sorcerer(std::string &name, std::string &title) : _name(name), _title(title) {
	std::cout << this->_name << ", " << this->_title;
	std::cout << " is born !" << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer &rhs) {
	this->_name = rhs.getName();
	this->_title = rhs.getTitle();
	std::cout << this->_name << ", " << this->_title;
	std::cout << " is born !" << std::endl;
}

Sorcerer & 		operator=(const Sorcerer &rhs) {
	this->_name = rhs.getName();
	this->_title = rhs.getTitle();
	std::cout << this->_name << ", " << this->_title;
	std::cout << " is born !" << std::endl;
	return (*this);
}

Sorcerer::~Sorcerer(void) {
	std::cout << this->_name << ", " << this->_title;
	std::cout << " is dead. Consequences will never be the same ! " << std::endl;
}

std::string		getName(void) {
	return (this->_name);
}

std::string		getTitle(void) {
	return (this->_title);
}

void			Sorcerer::polymorph(Victim const & victim) {
	victim.getPolymorphed();
}
