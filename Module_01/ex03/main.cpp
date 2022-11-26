/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ateak <ateak@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 16:15:36 by ateak             #+#    #+#             */
/*   Updated: 2022/11/26 16:26:19 by ateak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main() 
{
	{
		Weapon  club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.m_attack();
		club.m_setType("some other type of club");
		bob.m_attack();
	}
	{
		Weapon  club = Weapon("crude spiked club");
	
		HumanB jim("Jim");
		jim.m_setWeapon(club);
		jim.m_attack();
		club.m_setType("some other type of club");
		jim.m_attack();
	}

	return (0);
}