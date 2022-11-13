/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ateak <ateak@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 16:17:10 by ateak             #+#    #+#             */
/*   Updated: 2022/11/13 18:11:20 by ateak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	if (N <= 0)
		return (NULL);
	Zombie* horde = new (std::nothrow)Zombie[N];
	if (!horde)
		std::cout << "Could not allocate memory!" << std::endl;
	for (int i = 0; i < N; i++)
		horde[i].setName(name);
	return (horde);
}

