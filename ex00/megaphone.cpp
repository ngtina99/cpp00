/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 01:18:56 by marvin            #+#    #+#             */
/*   Updated: 2024/09/24 01:18:56 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The Goal of this exercise was to write a really simple c++ style programm, but without any classes yet, just to get familiar with the use of i.e. std::cout.

You can compile this project with make, make all or make re.
Then use it with ./megaphone "Argument_you_want_to_change_to_all_CAPS"

This first exercise is quite simple, we are asked to create a program that takes arguments and prints them back to the terminal in capital letters. If no arguments are provided the program will print out a default message, also in captial letters.*/

/*ClassName.hpp/ClassName.h, ClassName.cpp, or ClassName.tpp. Then, if you
have a header file containing the definition of a class "BrickWall" standing for a
brick wall, its name will be BrickWall.hpp.
• Unless specified otherwise, every output messages must be ended by a new-line
character and displayed to the standard output.*/

/*However, you can’t use any other external library. It means C++11 (and derived
forms) and Boost libraries are forbidden. The following functions are forbidden
too: *printf(), *alloc() and free(). If you use them, your grade will be 0 and
that’s it.
*/

/*• From Module 02 to Module 09, your classes must be designed in the Orthodox
Canonical Form, except when explicitely stated otherwise.
• Any function implementation put in a header file (except for function templates)
means 0 to the exercise.
• You should be able to use each of your headers independently from others. Thus,
they must include all the dependencies they need. However, you must avoid the
problem of double inclusion by adding include guards. Otherwise, your grade will
be 0.*/


#include <iostream>
#include <cctype> //why would I need this??
#include <cstring>

int main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else if (argc > 1)
	{
		for (int i = 1; i < argc; i++)
		{
			for (int j = 0; argv[i][j]; j++)
				std::cout << (char)std::toupper(argv[i][j]);
		}
	}
	std::cout << std::endl;
	return (0);
}
//std is the standar library I use that from here