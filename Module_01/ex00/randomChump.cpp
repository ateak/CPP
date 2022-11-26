/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ateak <ateak@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 16:17:17 by ateak             #+#    #+#             */
/*   Updated: 2022/11/26 17:07:31 by ateak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

void	randomChump(std::string m_name)
{
	Zombie stack;
	stack.m_setName(m_name);
	stack.m_announce();
}