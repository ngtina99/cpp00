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
	std::cout << '\n';
	return (0);
}
//std is the standar library I use that from here