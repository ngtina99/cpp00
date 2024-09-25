#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>
# include <fstream>
# include <iomanip>
# include <cstdlib>
# include <string>

#define BLUE   "\033[34m"
#define	GREEN  "\033[32m"
#define RED    "\033[31m"
#define EOC "\033[0m"

enum Fields {
	firstName,
	lastName,
	nickName,
	phoneNumber,
	darkestSecret
};

class Contact {
	private:
		std::string 		_info[5];
		static std::string	_title[5];
	public:
		Contact();
		~Contact();
		void	quitContact();
		void	setContact();
		void	getContact(int index);
};

#endif