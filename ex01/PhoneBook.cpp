/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuy-ngu <thuy-ngu@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 19:39:50 by thuy-ngu          #+#    #+#             */
/*   Updated: 2024/09/29 00:27:09 by thuy-ngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : _index(0), _contactNumber(0)
{
	return ;
}

PhoneBook::~PhoneBook()
{
	return ;
}

void	PhoneBook::quitPhoneBook()
{
	if (std::cin.eof())
	{
		std::cerr << "\n*End of input*\n";
		exit (1);
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

int	PhoneBook::checkInput(std::string &argv)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (argv[i])
	{
		if (argv[i] < '0' || argv[i] > '9')
			return (1);
		if (len >= 10)
			return (1);
		len++;
		i++;
	}
	return (0);
}

void	PhoneBook::getPhoneBook()
{
	std::string	input;
	int	inputNumber = 0;

	if (this->_contactNumber == 0)
		std::cout << RED << "The phonebook is empty\n" << EOC;
	else
	{
		std::cout << BLUE << "Enter a contact number (1-8): " << EOC;
		std::getline(std::cin, input);
		PhoneBook::quitPhoneBook();
		if(PhoneBook:: checkInput(input) || !input.length())
		{
			std::cout << RED << "the input is invalid\n" << EOC;
			return ;
		}
		inputNumber = atoi(input.c_str());
		if (inputNumber > this->_contactNumber)
			std::cout << RED << "there is no contact #" << inputNumber << '\n' << EOC;
		else if (inputNumber >= 1 && inputNumber <= 8)
		{
			std::cout 
			<< "|-------------------------------------------|\n"
			<< "|     Index|First Name| Last Name|  Nickname|\n"
			<< "|----------|----------|----------|----------|\n";
			this->_contact[inputNumber - 1].getContact(inputNumber);
			std::cout
			<< "|-------------------------------------------|" << std::endl;
		}
		else
			std::cout << RED << "The number is out of the range\n" << EOC;
	}
}
