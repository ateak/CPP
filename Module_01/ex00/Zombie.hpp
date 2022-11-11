/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ateak <ateak@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 19:56:05 by ateak             #+#    #+#             */
/*   Updated: 2022/11/11 19:58:47 by ateak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
private:
	std::string m_name;

public:
	Zombie( void ); //конструктор по умолчанию
	Zombie( std::string m_name ); //конструктор, принимающий один аргумент
	~Zombie();
	void	announce( void );
	void	randomChump( std::string m_name );
	Zombie*	newZombie( std::string m_name );
	
	void setName(const std::string &m_name);
};




#endif

