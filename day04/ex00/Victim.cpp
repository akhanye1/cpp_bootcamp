
#include "Victim.hpp"

Victim::Victim(void) {
}

Victim::Victim(std::string &name) : _name(name) {
	std::cout << "A random victim called " << this->_name;
	std::cout << " just popped !" << std::endl;
}

Victim::Victim(const Victim &rhs) {
	this->_name = rhs.getName();
	std::cout << "A random victim called " << this->_name;
	std::cout << " just popped !" << std::endl;
}

Victim & 		operator=(const Victim &rhs) {
	this->_name = rhs.getName();
	std::cout << "A random victim called " << this->_name;
	std::cout << " just popped !" << std::endl;
	return (*this);
}

Victim::~Victim(void) {
	std::cout << "Victim " << std::string << this->_name;
	std::cout << " just died for no reason !" << std::endl;
}

std::string		Victim::getName(void) {
	return (this->_name);
}

void			Victim::getPolymorphed(void) {
	std::cout << this->_name;
	std::cout << "has been turned into a cute little sheep !";
}
