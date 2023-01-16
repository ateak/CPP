/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ateak <ateak@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 12:29:16 by ateak             #+#    #+#             */
/*   Updated: 2023/01/16 20:28:10 by ateak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	ClapTrap Kate("Kate");
	ScavTrap Tanya("Tanya");
	FragTrap Yana("Yana");
	
	Kate.attack(Yana.getName());
	Yana.takeDamage(Kate.getDamage());
	Yana.attack(Kate.getName());
	Kate.takeDamage(Yana.getDamage());
	Tanya.guardGate();
	Tanya.attack("Crocodile");
	Tanya.takeDamage(42);
	Tanya.beRepaired(21);
	Yana.attack(Tanya.getName());
	Tanya.takeDamage(Yana.getDamage());
	Yana.highFivesGuys();
	return 0;
}