/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ateak <ateak@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 16:17:20 by ateak             #+#    #+#             */
/*   Updated: 2022/11/14 21:08:17 by ateak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Weapon.hpp"

Weapon::Weapon(const std::string &type)
{
	m_type = type;
	std::cout << m_type << " was born!" << std::endl;
}

Weapon::~Weapon()
{
	std::cout << m_type << " is dead!" << std::endl;
}

const std::string &Weapon::getType()
{
	return m_type;
}
	
void Weapon::setType(const std::string &type)
{
	m_type = type;
}