/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ateak <ateak@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 18:18:24 by ateak             #+#    #+#             */
/*   Updated: 2022/11/01 18:18:25 by ateak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
#include <cstring>

int	main(int argc, char *argv[])
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int count = 1; count < argc; ++count)
		{
			for (size_t i = 0; i < strlen(argv[count]); i++) 
				std::cout << char(toupper(argv[count][i]));
		}
		std::cout << std::endl;
	}
	return 0;
}