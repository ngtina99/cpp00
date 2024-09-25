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

#include "PhoneBook.hpp"

int	main()
{
	PhoneBook	phoneBook;
	std::string	command;
	while (1)
	{
		std::cout << "Enter command: ";
		std::getline(std::cin, command);
		
		phoneBook.quitPhoneBook();
		if (command == "EXIT")
			break ;
		else if (command == "ADD")
			phoneBook.setPhoneBook();
		else if (command == "SEARCH")
			phoneBook.getPhoneBook();
	}
	return (0);
}