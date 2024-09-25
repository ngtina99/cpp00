/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 19:40:33 by thuy-ngu          #+#    #+#             */
/*   Updated: 2024/09/25 23:10:45 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

Contact::Contact()
{
	return ;
}

Contact::~Contact()
{
	return ;
}

std::string Contact::_title[5] = 
{
    "First Name",
    "Last Name",
    "Nick Name",
    "Phone Number",
    "Darkest Secret"
};

void	Contact::setContact()
{
	std::string input;

	for (int i = firstName; i <= darkestSecret; i++)
	{
		//if()
		std::cout << "Enter > " << Contact::_title[i];
		std::getline(std::cin, input);
		//PhoneBook::quitPhoneBook(); SOLVE OUT LATER
		if (input.length() == 0)
		{
			std::cout << "the contact can’t have empty field\n";
			i--;
		}
		else//BEFORE PUT CHECK IF IT IS NUMBER AND ELSE
			this->_info[i] = input;
	}
	std::cout << "Contact added!\n";
}

void	Contact::getContact(int index)
{
	std::cout << "|" << std::setw(10) << index;
	for (int i = firstName; i <= nickName; i++)
	{
		std::cout << "|";
		if (this->_info[i].length() > 10)
			std::cout << this->_info[i].substr(0, 9) << ".";
		else
			std::cout << std::setw(10) << this->_info[i];
	}
	std::cout << "|" << std::endl;
}
