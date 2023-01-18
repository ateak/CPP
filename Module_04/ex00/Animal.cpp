/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ateak <ateak@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 14:30:43 by ateak             #+#    #+#             */
/*   Updated: 2023/01/18 16:34:32 by ateak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "iostream"

Animal::Animal() : type("Animal")
{
	std::cout << "Default constructor for Animal" << std::endl;
}
Animal::Animal(const Animal &copy)
{
	std::cout << "Copy constructor for Animal" << std::endl;
	*this = copy;
}
Animal::~Animal()
{
	std::cout << "Destructor for Animal" << std::endl;
}
Animal &Animal::operator=(const Animal &value)
{
	if (this == &value)
		return *this;
	this->type = value.type;
	return *this;
}
Animal::Animal(const std::string &name) : type(name)
{
	std::cout << "Setting type constructor for Animal" << std::endl;
}

const std::string &Animal::getType() const
{
	return type;
}

void Animal::makeSound() const
{
	std::cout << "Animal sounds like default Animal" << std::endl;
}