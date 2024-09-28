#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

# include <iostream>
# include <string>
# include <cstdlib>
# include <iomanip>

#define BLUE	"\033[34m"
#define	GREEN	"\033[32m"
#define RED		"\033[31m"
#define EOC		"\033[0m"

class	PhoneBook {

	public:

		PhoneBook();
		~PhoneBook();
		void		setPhoneBook();
		void		getPhoneBook();
		static void	quitPhoneBook();
		int			checkInput(std::string &argv);

	private:

		Contact	_contact[8];
		int		_index;
		int		_contactNumber;
};

#endif