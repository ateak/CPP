/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ateak <ateak@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 16:15:36 by ateak             #+#    #+#             */
/*   Updated: 2022/11/26 17:10:50 by ateak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name);

int main(void)
{
	int N = 10;

	Zombie *horde = zombieHorde(N, std::string("Bob"));
	for (int i = 0; i < N; i++)
		horde[i].m_announce();
	delete[] horde;
}