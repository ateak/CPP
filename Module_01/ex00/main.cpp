/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ateak <ateak@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 16:15:36 by ateak             #+#    #+#             */
/*   Updated: 2022/11/13 16:28:27 by ateak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

void	randomChump(std::string m_name);
Zombie*	newZombie(std::string m_name);

int main(void)
{
	randomChump("Evgeniya"); //зомби создается на стеке во внешней функции и умирает сразу после завершения функции

	Zombie stack_zomb(std::string("Alisa")); //зомби создается на стеке в классе и умирает как только завершается вся программа
	stack_zomb.announce();

	Zombie *heap_zomb = newZombie(std::string("Tanya")); //зомби создается на куче и умирает как только мы вызываем delete
	heap_zomb->announce();
	delete heap_zomb;
}