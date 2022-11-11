/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ateak <ateak@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 19:34:51 by ateak             #+#    #+#             */
/*   Updated: 2022/11/11 19:34:52 by ateak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	std::string str; // command
	PhoneBook	phones; //phonebook

	while (1)
	{
		std::cout << "Enter a command (ADD, SEARCH or EXIT): ";
		std::cin >> str;
		if (std::cin.fail())
			exit(1);
		if (!str.compare("ADD"))
			phones.setContact();
		else if (!str.compare("SEARCH"))
			phones.getContact();
		else if (!str.compare("EXIT"))
			return (0);
		else
			std::cout << "Incorrect input. Please try again." << std::endl;
	}
}
