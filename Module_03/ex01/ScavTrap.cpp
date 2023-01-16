/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ateak <ateak@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 15:02:20 by ateak             #+#    #+#             */
/*   Updated: 2023/01/16 15:35:51 by ateak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("", 100, 50, 20)
{
	std::cout << "ScavTrap default constructor called" << std::endl;
}
ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name, 100, 50, 20)
{
	std::cout << "ScavTrap name constructor called" << std::endl;
}
ScavTrap::ScavTrap(const ScavTrap &scavTrap) : ClapTrap(scavTrap)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
}
ScavTrap &ScavTrap::operator=(const ScavTrap &scavTrap)
{
	if (this == &scavTrap)
		return *this;
	setName(scavTrap.getName());
	setHitPoints(scavTrap.getHitPoints());
	setEnergy(scavTrap.getEnergy());
	setDamage(scavTrap.getDamage());
	return *this;
}
ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
if (getHitPoints() > 0 && getEnergy() > 0)
	{
		setEnergy(getEnergy() - 1);
		std::cout << "ScavTrap " << getName() << " attacks " << target;
		std::cout << ", causing " << getDamage() <<" points of damage!" <<std::endl;
	}
	else
		std::cout << "ScavTrap " << getName() << " has no energy or hit points left to do anything." << std::endl;
	std::cout << getName() << "'s health is " << getHitPoints() << " hit points\n" << getName() << "'s energy is " << getEnergy() << " points" << std::endl;
}
void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << getName() << " is now in Gate keeper mode" << std::endl;
}