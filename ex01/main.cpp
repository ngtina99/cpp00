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
		else
			std::cout << BLUE << "Use command: ADD, SEARCH or EXIT\n" << EOC;
	}
	return (0);
}