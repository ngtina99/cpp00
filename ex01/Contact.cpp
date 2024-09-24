/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuy-ngu <thuy-ngu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 19:40:33 by thuy-ngu          #+#    #+#             */
/*   Updated: 2024/09/24 22:21:09 by thuy-ngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

Contact::Contact()
{
	//std::cout << "Contact Constructor called" << std::endl;//think on this or try
	return ;
}

Contact::~Contact()
{
	//std::cout << "Contact Destructor called" << std::endl;
	return ;
}

std::string Contact::_fields_name[5] =
{
	"First Name",
	"Last Name",
	"Nickname",
	"Phone Number",
	"Darkest Secret"
};

void	Contact::setContact()
{
	std::string input;
	for (int i = FirstName; i <= DarkestSecret; i++)
	{
		std::cout << "Please enter the " << Contact::_fields_name[i] << "\n";
		std::getline(std::cin, input);
		PhoneBook::quitPhoneBook();
		if (this->_informations[i].length() == 0)
		{
			std::cout << "Empty contact information not allowed.\n";
			i--;
		}
	}
	std::cout << "Contact added\n";
}

// void	Contact::getContact(int index)
// {
// 	std::cout << "|" << std::setw(10) << index;
// 	for (int i = FirstName; i <= NickName; i++)
// 	{
// 		std::cout << "|";
// 		if (this->_informations[i].length() > 10)
// 			std::cout << this->_informations[i].substr(0, 9) << ".";
// 		else
// 			std::cout << std::setw(10) << this->_informations[i];
// 	}
// 	std::cout << "|" << std::endl;
// }
