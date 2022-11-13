/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ateak <ateak@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 16:15:36 by ateak             #+#    #+#             */
/*   Updated: 2022/11/13 21:13:21 by ateak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "str address:                       " << &str << std::endl;
	std::cout << "address held by stringPTR:         " << stringPTR << std::endl;
	std::cout << "address held by stringREF:         " << &stringREF << std::endl;

	std::cout << std::endl;

	std::cout << "str value:                         " << str << std::endl;
	std::cout << "value pointed to by stringPTR:     " << *stringPTR << std::endl;
	std::cout << "value pointed to by stringREF:     " << stringREF << std::endl;

	return (0);
}