/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ateak <ateak@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 16:17:20 by ateak             #+#    #+#             */
/*   Updated: 2022/11/26 16:27:08 by ateak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

Zombie::Zombie()
{
	_name = "Zombie";
	std::cout << _name << " was born!" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << _name << " is dead!" << std::endl;
}

void	Zombie::m_announce()
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
	
void	Zombie::m_setName(const std::string &m_name)
{
	this->_name = m_name;
}