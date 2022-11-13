/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ateak <ateak@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 16:17:20 by ateak             #+#    #+#             */
/*   Updated: 2022/11/13 16:31:41 by ateak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

Zombie::Zombie()
{
	m_name = "anybody";
	//std::cout << m_name << " appeared" << std::endl;
}

Zombie::Zombie(std::string name)
{
	m_name = name;
	//std::cout << m_name << " was born" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << m_name << " is dead!" << std::endl;
}

void	Zombie::announce()
{
	std::cout << m_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
	
void	Zombie::setName(const std::string &m_name)
{
	this->m_name = m_name;
}