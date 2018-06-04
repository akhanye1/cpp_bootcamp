#include "phonebook.class.hpp"

void	fillPhonebook(Phonebook phonebook[]) {
	int	i;

	i = -1;
	while (++i < 8) {
		phonebook[i].printContact();
	}	
}

int		main(void) {
	Phonebook	phonebook[8];
	fillPhonebook(phonebook);
	return (0);
}
