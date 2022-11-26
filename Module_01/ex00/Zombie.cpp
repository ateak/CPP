/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ateak <ateak@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 16:17:20 by ateak             #+#    #+#             */
/*   Updated: 2022/11/26 17:06:47 by ateak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

Zombie::Zombie()
{
	_name = "anybody";
	//std::cout << m_name << " appeared" << std::endl;
}

Zombie::Zombie(std::string name)
{
	_name = name;
	//std::cout << m_name << " was born" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << _name << " is dead!" << std::endl;
}

void	Zombie::m_announce()
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
	
void	Zombie::m_setName(const std::string &_name)
{
	this->_name = _name;
}