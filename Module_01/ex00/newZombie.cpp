/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ateak <ateak@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 16:17:10 by ateak             #+#    #+#             */
/*   Updated: 2022/11/13 16:17:11 by ateak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

Zombie	*newZombie(std::string name)
{
	Zombie *dead = new(std::nothrow)Zombie(name); // указатель dead станет нулевым, если память не выделится 
							// (std::nothrow для того, чтобы избежать генерации исключения)
	if (!dead)
	{
		std::cout << "Could not allocate memory!" << std::endl;
	}
	return (dead);
}
