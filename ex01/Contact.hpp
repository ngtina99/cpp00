#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>
# include <fstream>
# include <iomanip>
# include <cstdlib>
# include <string>

enum Fields {
    FirstName = 0,
    LastName,
    NickName,
    PhoneNumber,
    DarkestSecret
};

class Contact {
	private:
    	std::string _info[5];
		// std::string (_firstName);
		// std::string (_lastName);
		// std::string (_nickName);
		// std::string (_phoneNumber);
		// std::string (_darkestSecret);
//can not have empty fields make a protection for that 
	public:
		Contact();
		~Contact();
		static std::string _fields_name[5];
		void	setContact();
		void	getContact(int index);
};

#endif