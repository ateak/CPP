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
<<<<<<< HEAD
	Zombie *dead = new (std::nothrow)Zombie(name); // std::nothrow возвращает нулевой указатель, если память не выделится,
												// вместо того, чтобы выдать exception
	if (!dead)
		std::cout << "Could not allocate memory!" << std::endl;
=======
	Zombie *dead = new(std::nothrow)Zombie(name); // указатель dead станет нулевым, если память не выделится 
							// (std::nothrow для того, чтобы избежать генерации исключения)
	if (!dead)
	    std::cout << "Could not allocate memory!" << std::endl;
>>>>>>> b363ac38f336c442d7a1d78b579b7dfcc4062b21
	return (dead);
}
