/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 01:56:06 by marvin            #+#    #+#             */
/*   Updated: 2024/09/24 01:56:06 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"


/*This second exercise is a bit more fun. We have to simulate a phonebook with a terminal interactive UI. We can ADD or SEARCH for contacts, 
and we can also EXIT, clearing the list of contacts and ending the program. The phonebook can receive up to 8 contacts, 
such that the 9th contact will replace the 1st contact, the 10th will replace the 2nd, and so on.*/

// ADD: save a new contact
// ◦ If the user enters this command, they are prompted to input the information
// of the new contact one field at a time. Once all the fields have been completed,
// add the contact to the phonebook.
// ◦ The contact fields are: first name, last name, nickname, phone number, and
// darkest secret. A saved contact can’t have empty fields

// SEARCH: display a specific contact
// ◦ Display the saved contacts as a list of 4 columns: index, first name, last
// name and nickname.
// ◦ Each column must be 10 characters wide. A pipe character (’|’) separates
// them. The text must be right-aligned. If the text is longer than the column,
// it must be truncated and the last displayable character must be replaced by a
// dot (’.’).
// ◦ Then, prompt the user again for the index of the entry to display. If the index
// is out of range or wrong, define a relevant behavior. Otherwise, display the
// contact information, one field per line.


// PhoneBook::PhoneBook(){
// 	this->_limit = false;
// }


int	main()
{
	std::string(command);
	while (1)
	{
		std::cout << "Enter a command: ";
		std::getline(std::cin, command);
		cpp
Copy code
command.erase(0, command.find_first_not_of(" \t\v\f\r"));
is used to trim leading whitespace characters from the command string. Let's break it down:
1. command.find_first_not_of(" \t\v\f\r")
This function call searches the command string to find the first character that is not in the set of whitespace characters " \t\v\f\r".
" \t\v\f\r" is a string that contains several whitespace characters:
" ": Space
"\t": Horizontal tab
"\v": Vertical tab
"\f": Form feed
"\r": Carriage return
		if (std::cin.eof() == true)
		{
			std::cout << "You Pressed ^D. Exiting phonebook now." << std::endl;
			exit(0);
		}
		if(command = "EXIT")
			break ;
		else if (command == "ADD")
		else if (command == "SEARCH")
	}
}