/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuy-ngu <thuy-ngu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 19:40:33 by thuy-ngu          #+#    #+#             */
/*   Updated: 2024/09/24 22:45:03 by thuy-ngu         ###   ########.fr       */
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
		std::cout << "Please enter the> " << Contact::_fields_name[i];
		std::getline(std::cin, input);
		//PhoneBook::quitPhoneBook(); SOLVE OUT LATER
		if (input.length() == 0)
		{
			std::cout << "Empty contact information not allowed.\n";
			i--;
		}
		else//BEFORE PUT CHECK IF IT IS NUMBER AND ELSE
			this->_info[i] = input;
	}
	std::cout << "Contact added\n";
}

void	Contact::getContact(int index)
{
	std::cout << "|" << std::setw(10) << index;
	for (int i = FirstName; i <= NickName; i++)
	{
		std::cout << "|";
		if (this->_info[i].length() > 10)
			std::cout << this->_info[i].substr(0, 9) << ".";
		else
			std::cout << std::setw(10) << this->_info[i];
	}
	std::cout << "|" << std::endl;
}
