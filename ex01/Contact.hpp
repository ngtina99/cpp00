#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>
# include <fstream>
# include <iomanip>
# include <cstdlib>
# include <string>

enum Fields {
    firstName,
    lastName,
    nickName,
    phoneNumber,
    darkestSecret
};



class Contact {
	private:
		std::string _info[5];
		static std::string _title[5];
	public:
		Contact();
		~Contact();
		void	setContact();
		void	getContact(int index);
};

#endif