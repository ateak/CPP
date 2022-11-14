/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ateak <ateak@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 19:56:05 by ateak             #+#    #+#             */
/*   Updated: 2022/11/14 20:38:47 by ateak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
private:
	std::string	m_name;
	Weapon		*m_weapon; //in other words HumanB may not always have a Weapon because pointer can be equal NULL

public:
	HumanB(const std::string &name);
	~HumanB();
	
	void	attack();
	void	setWeapon(Weapon &weapon);
};

#endif
