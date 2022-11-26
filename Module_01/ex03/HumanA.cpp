/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ateak <ateak@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 16:17:20 by ateak             #+#    #+#             */
/*   Updated: 2022/11/26 17:12:10 by ateak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "HumanA.hpp"

HumanA::HumanA(const std::string &name, Weapon &weapon) : _name(name), _weapon(weapon)
{
	//std::cout << m_name << " was born!" << std::endl;
}

HumanA::~HumanA()
{
	//std::cout << m_name << " is dead!" << std::endl;
}

void	HumanA::m_attack()
{
	std::cout << _name << " attacks with their " << _weapon.m_getType() << std::endl;
}
	