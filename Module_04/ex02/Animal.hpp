/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ateak <ateak@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 14:23:53 by ateak             #+#    #+#             */
/*   Updated: 2023/01/18 20:59:29 by ateak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>

class Animal
{
protected:
	std::string type;
public:
	Animal();
	Animal(const Animal &copy);
	virtual ~Animal();
	Animal& operator=(const Animal &value);
	Animal(const std::string &name);

	const std::string &getType() const;
	virtual void makeSound() const = 0;
};

#endif