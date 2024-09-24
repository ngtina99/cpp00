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
    Nickname,
    PhoneNumber,
    DarkestSecret
};

class Contact {
	private:
		static std::string _fields_name[5]; // Field names
    	std::string _informations[5];
		// std::string (_firstName);
		// std::string (_lastName);
		// std::string (_nickName);
		// std::string (_phoneNumber);
		// std::string (_darkestSecret);
//can not have empty fields make a protection for that 
	public:
		Contact();
		~Contact();
		void	setContact();
		//void	getContact();
};

#endif