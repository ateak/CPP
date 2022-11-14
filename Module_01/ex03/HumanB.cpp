/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ateak <ateak@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 16:17:20 by ateak             #+#    #+#             */
/*   Updated: 2022/11/14 21:06:56 by ateak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "HumanB.hpp"

HumanB::HumanB(const std::string &name) : m_name(name)
{
	m_weapon = NULL;
	std::cout << m_name << " was born!" << std::endl;
}

HumanB::~HumanB()
{
	std::cout << m_name << " is dead!" << std::endl;
}

void	HumanB::attack()
{
	if (m_weapon == NULL)
		return ;
	std::cout << m_name << " attacks with their " << m_weapon->getType() << std::endl;
}
	
void	HumanB::setWeapon(Weapon &weapon)
{
	m_weapon = &weapon;
}