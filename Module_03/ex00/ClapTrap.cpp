/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ateak <ateak@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 16:49:42 by ateak             #+#    #+#             */
/*   Updated: 2022/12/21 18:23:21 by ateak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _Name(""), _HitPoints(10), _Energy(10), _Damage(0)
{
	std::cout << "Default constructor called" << std::endl;
}
ClapTrap::ClapTrap(const std::string &name) : _Name(name),  _HitPoints(10), _Energy(10), _Damage(0)
{
	std::cout << "Name constructor called" << std::endl;
}
ClapTrap::ClapTrap(const ClapTrap &clapTrap)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = clapTrap;
}
ClapTrap &ClapTrap::operator = (const ClapTrap &clapTrap)
{
	//	std::cout << "Copy assignment operator called" << std::endl;
	if (this == &clapTrap)
		return *this;
	_Name = clapTrap.getName();
	_HitPoints = clapTrap.getHitPoints();
	_Energy = clapTrap.getEnergy();
	_Damage = clapTrap.getDamage();
	return *this;
}
ClapTrap::~ClapTrap()
{
		std::cout << "Destructor called" << std::endl;
}


void	ClapTrap::setName(const std::string &newName)
{
	_Name = newName;
}
void	ClapTrap::setHitPoints(const unsigned int newHitPoints)
{
	_HitPoints = newHitPoints;
}
void	ClapTrap::setEnergy(const unsigned int newEnergy)
{
	_Energy = newEnergy;
}
void	ClapTrap::setDamage(const unsigned int newDamage)
{
	_Damage = newDamage;
}

const std::string ClapTrap::getName() const
{
	return _Name;
}
unsigned int ClapTrap::getHitPoints() const
{
	return _HitPoints;
}
unsigned int ClapTrap::getEnergy() const
{
	return _Energy;
}
unsigned int ClapTrap::getDamage() const
{
	return _Damage;
}


void	ClapTrap::attack(const std::string &target)
{
	if (getHitPoints() > 0 && getEnergy() > 0)
	{
		setEnergy(getEnergy() - 1);
		std::cout << "ClapTrap " << getName() << " attacks " << target;
		std::cout << ", causing " << getDamage() <<" points of damage!" <<std::endl;
	}
	else
		std::cout << "ClapTrap " << getName() << " has no energy or hit points left to do anything." << std::endl;
	std::cout << getName() << "'s health is " << getHitPoints() << "hit points\n" << "energy is "<< getEnergy() << " points" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (getHitPoints() > 0)
	{
		setHitPoints(getHitPoints() - amount);
		std::cout << "ClapTrap " << getName() << " takes " << amount << " points of damage!" << std::endl;
	}
	else
		std::cout << "ClapTrap " << getName() << " has no hit points left" << std::endl;
	std::cout << getName() << "'s health is " << getHitPoints() << "hit points\n" << "energy is "<< getEnergy() << " points" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (getHitPoints() > 0 && getEnergy() > 00)
	{
		setEnergy(getEnergy() - 1);
		setHitPoints(getHitPoints() + amount);
		std::cout << "ClapTrap "<< getName() << " repairs " << amount << " hit points" << std::endl;
	}
	else
		std::cout<< "ClapTrap "<< getName() << " has no energy or HP left to do anything." << std::endl;
	std::cout << getName() << "'s health is " << getHitPoints() << "hit points\n" << "energy is "<< getEnergy() << " points" << std::endl;
}