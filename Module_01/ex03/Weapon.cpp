/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ateak <ateak@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 16:17:20 by ateak             #+#    #+#             */
/*   Updated: 2022/11/26 16:26:02 by ateak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Weapon.hpp"

Weapon::Weapon(const std::string &type)
{
	_type = type;
	//std::cout << m_type << " was born!" << std::endl;
}

Weapon::~Weapon()
{
	//std::cout << m_type << " is dead!" << std::endl;
}

const std::string &Weapon::m_getType()
{
	return _type;
}
	
void Weapon::m_setType(const std::string &type)
{
	_type = type;
}