/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ateak <ateak@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 12:29:16 by ateak             #+#    #+#             */
/*   Updated: 2023/01/16 15:53:05 by ateak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	ClapTrap Kate;
	ClapTrap Tanya(Kate);
	ClapTrap Yana("Yana");

	Kate.setName("Kate");
	Tanya.setName("Tanya");
	Yana.setDamage(5);
	
	Yana.attack(Kate.getName());
	Kate.takeDamage(Yana.getDamage());
	Kate.attack(Tanya.getName());
	Tanya.takeDamage(Kate.getDamage());
	Kate.beRepaired(1);
	Yana.attack(Tanya.getName());
	Tanya.takeDamage(Yana.getDamage());
	Tanya.setDamage(4);
	Tanya.attack(Yana.getName());
	Yana.takeDamage(Tanya.getDamage());
	Tanya.attack(Yana.getName());
	Yana.takeDamage(Tanya.getDamage());
	Yana.beRepaired(3);
	Tanya.attack(Yana.getName());
	Yana.takeDamage(Tanya.getDamage());
	Tanya.attack(Yana.getName());
	Yana.takeDamage(Tanya.getDamage());
	Yana.beRepaired(1);
	Kate.attack(Yana.getName());
	Yana.takeDamage(Kate.getDamage());
	Kate.attack(Tanya.getName());
	Tanya.takeDamage(Kate.getDamage());
	Kate.attack(Tanya.getName());
	Tanya.takeDamage(Kate.getDamage());
	Kate.attack(Tanya.getName());
	Tanya.takeDamage(Kate.getDamage());
	Kate.attack(Tanya.getName());
	Tanya.takeDamage(Kate.getDamage());
	Kate.attack(Tanya.getName());
	Tanya.takeDamage(Kate.getDamage());
	Kate.attack(Tanya.getName());
	Tanya.takeDamage(Kate.getDamage());
	Kate.attack(Tanya.getName());
	Tanya.takeDamage(Kate.getDamage());
	Kate.attack(Tanya.getName());
	Tanya.takeDamage(Kate.getDamage());

	ScavTrap Andrey("Andrey");
	Andrey.guardGate();
	Tanya.attack(Andrey.getName());
	Andrey.takeDamage(Tanya.getDamage());
	Andrey.attack(Tanya.getName());
	Tanya.takeDamage(Andrey.getDamage());
	Andrey.takeDamage(40);
	Andrey.beRepaired(20);

	return 0;
}