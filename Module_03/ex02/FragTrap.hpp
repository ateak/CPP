/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ateak <ateak@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 16:03:58 by ateak             #+#    #+#             */
/*   Updated: 2023/01/16 16:07:47 by ateak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
	FragTrap();
	FragTrap(const std::string &name);
	FragTrap(const FragTrap &fragTrap);
	FragTrap& operator=(const FragTrap &fragTrap);
	~FragTrap();
	
	void attack(const std::string &target);
	void highFivesGuys(void);
};


#endif