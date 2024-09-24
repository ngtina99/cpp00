#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>
# include <fstream>
# include <iomanip>
# include <cstdlib>
# include <string>
# include "PhoneBook.hpp"

class Contact {
	private:
		std::string (_firstName);
		std::string (_lastName);
		std::string (_nickName);
		std::string (_phoneNumber);
		std::string (_darkestSecret);
//can not have empty fields
	public:
	std::string getFirstName(){
		return _firstName;
	}

//
};

#endif