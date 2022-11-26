/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ateak <ateak@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 19:56:05 by ateak             #+#    #+#             */
/*   Updated: 2022/11/26 16:24:02 by ateak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
private:
	std::string	_name;
	Weapon		*_weapon; //in other words HumanB may not always have a Weapon because pointer can be equal NULL

public:
	HumanB(const std::string &name);
	~HumanB();
	
	void	m_attack();
	void	m_setWeapon(Weapon &weapon);
};

#endif
