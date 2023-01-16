/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ateak <ateak@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 19:58:57 by ateak             #+#    #+#             */
/*   Updated: 2023/01/16 20:19:08 by ateak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("", 100, 100, 30)
{
	std::cout << "FragTrap default constructor called" << std::endl;
}
FragTrap::FragTrap(const std::string &name) : ClapTrap(name, 100, 100, 30)
{
	std::cout << "FragTrap name constructor called" << std::endl;
}
FragTrap::FragTrap(const FragTrap &fragTrap) : ClapTrap(fragTrap)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
}
FragTrap &FragTrap::operator=(const FragTrap &fragTrap)
{
	if (this == &fragTrap)
		return *this;
	setName(fragTrap.getName());
	setHitPoints(fragTrap.getHitPoints());
	setEnergy(fragTrap.getEnergy());
	setDamage(fragTrap.getDamage());
	return *this;
}
FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}

void FragTrap::attack(const std::string &target)
{
if (getHitPoints() > 0 && getEnergy() > 0)
	{
		setEnergy(getEnergy() - 1);
		std::cout << "FragTrap " << getName() << " attacks " << target;
		std::cout << ", causing " << getDamage() <<" points of damage!" <<std::endl;
	}
	else
		std::cout << "FragTrap " << getName() << " has no energy or hit points left to do anything." << std::endl;
	std::cout << getName() << "'s health is " << getHitPoints() << " hit points\n" << getName() << "'s energy is " << getEnergy() << " points" << std::endl;
}
void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << getName() << " says \"How about a high five, man?\"" << std::endl;
}