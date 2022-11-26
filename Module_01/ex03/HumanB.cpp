/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ateak <ateak@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 16:17:20 by ateak             #+#    #+#             */
/*   Updated: 2022/11/26 17:13:25 by ateak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "HumanB.hpp"

HumanB::HumanB(const std::string &name) : _name(name)
{
	_weapon = NULL;
	//std::cout << m_name << " was born!" << std::endl;
}

HumanB::~HumanB()
{
	//std::cout << m_name << " is dead!" << std::endl;
}

void	HumanB::m_attack()
{
	if (_weapon == NULL)
		return ;
	std::cout << _name << " attacks with their " << _weapon->m_getType() << std::endl;
}
	
void	HumanB::m_setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
}