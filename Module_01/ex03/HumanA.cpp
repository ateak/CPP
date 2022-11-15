/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ateak <ateak@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 16:17:20 by ateak             #+#    #+#             */
/*   Updated: 2022/11/15 14:43:53 by ateak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "HumanA.hpp"

HumanA::HumanA(const std::string &name, Weapon &weapon) : m_name(name), m_weapon(weapon)
{
	//std::cout << m_name << " was born!" << std::endl;
}

HumanA::~HumanA()
{
	//std::cout << m_name << " is dead!" << std::endl;
}

void	HumanA::attack()
{
	std::cout << m_name << " attacks with their " << m_weapon.getType() << std::endl;
}
	