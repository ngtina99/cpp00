#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>//library?
# include <string>
# include <fstream>
# include <iomanip>
# include <cstdlib>
# include <string>

# include "Contact.hpp"

class	PhoneBook 
{
	private:
		Contact	_contact[8];
		int		_index;
		int		_contactNumber;
	public:
		PhoneBook();
		~PhoneBook();
		void	setPhoneBook();
		void	getPhoneBook();
		void	quitPhoneBook();
};

#endif