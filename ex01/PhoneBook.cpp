/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuy-ngu <thuy-ngu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 19:39:50 by thuy-ngu          #+#    #+#             */
/*   Updated: 2024/09/24 22:44:02 by thuy-ngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : _index(0), _contactNumber(0)
{
	//std::cout << "PhoneBook Constructor called" << std::endl;//think on this or try
	return ;
}

PhoneBook::~PhoneBook()
{
	//std::cout << "PhoneBook Destructor called" << std::endl;
	return ;
}
void	PhoneBook::quitPhoneBook()
{
	if (std::cin.eof())
	{
		std::cout << "\n*End of input*\n";
		exit (0);
	}
}

void	PhoneBook::setPhoneBook()
{
	std::string input;

	this->_contact[this->_index].setContact();
	this->_index++;
	this->_contactNumber++;
	if(this->_index == 8)
		this->_index = 0;
}
void	PhoneBook::getPhoneBook()// TEST
{
	std::string	input;
	int	inputNumber = 0;

	if (this->_contactNumber == 0)
		std::cout << "The phonebook is empty\n";
	else
	{
		std::cout << "Enter a contact number: ";
		std::getline(std::cin, input);
		PhoneBook::quitPhoneBook();
		inputNumber = atoi(input.c_str());//something against this 8.0 and stuff
		if (inputNumber > this->_contactNumber)
			std::cout << "There is no contact #" << inputNumber << '\n';
		else if (inputNumber >= 1 && inputNumber <= 8)
		{
			std::cout << "|-------------------------------------------|" << std::endl;
			std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
			std::cout << "|----------|----------|----------|----------|" << std::endl;
			this->_contact[inputNumber - 1].getContact(inputNumber);
			std::cout << "|-------------------------------------------|" << std::endl;
		}
		else
			std::cout << "The number is invalid\n";
	}
}
