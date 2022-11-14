/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ateak <ateak@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 14:49:11 by ateak             #+#    #+#             */
/*   Updated: 2022/11/14 14:49:12 by ateak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

Zombie *newZombie(std::string name)
{
	Zombie *dead = new (std::nothrow)Zombie(name); // std::nothrow возвращает нулевой указатель, если память не выделится,
												// вместо того, чтобы выдать exception
	if (!dead)
		std::cout << "Could not allocate memory!" << std::endl;
	return (dead);
}
