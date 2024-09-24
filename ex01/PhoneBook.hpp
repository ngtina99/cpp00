#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include <fstream>
# include <iomanip>
# include <cstdlib>
# include <string>

//thinking on the libraries

class	PhoneBook {
	private:
		Contact	_contacts[8];
		int _limit;
	public:
		phoneBook();
		Contact &getContact(int i);
}

#endif