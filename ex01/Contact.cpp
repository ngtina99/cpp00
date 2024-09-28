/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuy-ngu <thuy-ngu@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 19:40:33 by thuy-ngu          #+#    #+#             */
/*   Updated: 2024/09/29 00:30:29 by thuy-ngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

std::string Contact::_title[5] = 
{
	"first name",
	"last name",
	"nickname",
	"phone number",
	"darkest secret"
};

Contact::Contact()
{
	return ;
}

Contact::~Contact()
{
	return ;
}

void	Contact::setContact()
{
	std::string	input;

	for (int i = firstName; i <= darkestSecret; i++)
	{
		std::cout << BLUE << "Enter " << Contact::_title[i] << ": " << EOC;
		std::getline(std::cin, input);
		PhoneBook::quitPhoneBook();
		if (!input.length())
		{
			std::cout << RED << "the contact can’t have empty field\n" << EOC;
			i--;
		}
		else
			this->_info[i] = input;
	}
	std::cout << GREEN << "Contact added!" << std::endl << EOC;
}

void	Contact::getContact(int index)
{
	std::cout << "|" << std::setw(10) << index;
	for (int i = firstName; i <= nickName; i++)
	{
		std::cout << "|";
		if (this->_info[i].length() > 10)
			std::cout << BLUE << this->_info[i].substr(0, 9) << "." << EOC;
		else
			std::cout << BLUE << std::setw(10) << this->_info[i] << EOC;
	}
	std::cout << "|" << std::endl;
}
