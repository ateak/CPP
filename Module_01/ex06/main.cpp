/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ateak <ateak@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 15:35:57 by ateak             #+#    #+#             */
/*   Updated: 2022/11/25 17:27:32 by ateak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HarlFilter.hpp"

int	main(int argc, char** argv)
{
	Harl harlFilter;

	if (argc != 2)
	{
		std::cout << "Wrong number of arguments!" << std::endl;
		std::cout << "Please enter ./harlFilter and DEBUG, INFO, WARNING or ERROR" << std::endl;
		return (1);
	}
	harlFilter.m_complain(argv[1]);
	return (0);
}