/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ateak <ateak@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 19:56:05 by ateak             #+#    #+#             */
/*   Updated: 2022/11/26 16:28:19 by ateak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
private:
	std::string _name;

public:
	Zombie();
	Zombie(std::string _name);
	~Zombie();
	void	m_announce();
	void	m_setName(const std::string &_name);
};


#endif
