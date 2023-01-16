/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ateak <ateak@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 16:42:29 by ateak             #+#    #+#             */
/*   Updated: 2023/01/16 15:34:24 by ateak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <string>

class ClapTrap
{
private:
	std::string _Name;
	int			_HitPoints;
	int			_Energy;
	int			_Damage;

public:
	ClapTrap();
	ClapTrap(const std::string &name);
	ClapTrap(const std::string &name, unsigned int hitPoints,
			 unsigned int energy, unsigned int damage);
	ClapTrap(const ClapTrap &clapTrap);
	ClapTrap& operator=(const ClapTrap &clapTrap);
	~ClapTrap();

	void				setName(const std::string &newName);
	void				setHitPoints(const unsigned int newHitPoints);
	void				setEnergy(const unsigned int newEnergy);
	void				setDamage(const unsigned int newDamage);
	
	const std::string	getName() const;
	unsigned int		getHitPoints() const;
	unsigned int		getEnergy() const;
	unsigned int		getDamage() const;


	void 				attack(const std::string &target);
	void 				takeDamage(unsigned int amount);
	void 				beRepaired(unsigned int amount);
};


#endif