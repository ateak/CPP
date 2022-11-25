/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HarlFilter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ateak <ateak@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 17:50:41 by ateak             #+#    #+#             */
/*   Updated: 2022/11/25 20:03:15 by ateak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HarlFilter.hpp"

Harl::Harl()
{
	_level[0] = "DEBUG";
	_level[1] = "INFO";
	_level[2] = "WARNING";
	_level[3] = "ERROR";
}

Harl::~Harl()
{
}

void Harl::_debug()
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger." << std::endl;
	std::cout << "I really do!" << std::endl; 
}

void Harl::_info()
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money." << std::endl;
	std::cout << "You didn’t put enough bacon in my burger!" << std::endl; 
	std::cout << "If you did, I wouldn’t be asking for more!" << std::endl;
	std::cout << "I really do!" << std::endl; 
}

void Harl::_warning()
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
	std::cout << "I’ve been coming for years whereas you started working here since last month." << std::endl; 
}

void Harl::_error()
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable!" << std::endl;
	std::cout << "I want to speak to the manager now." << std::endl;
}

void Harl::m_complain(std::string level)
{	
	int i;
	int	lvl;
	
	for (i = 0; i < 4; i++)
	{
		if (this->_level[i] == level)
			lvl = i;
	}
	switch (lvl)
	{
	case 0:
		Harl::_debug();
	case 1:
		Harl::_info();
	case 2:
		Harl::_warning();
	case 3:
		Harl::_error();
		break;
	default:
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}