/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ateak <ateak@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 16:31:45 by ateak             #+#    #+#             */
/*   Updated: 2023/01/18 16:34:42 by ateak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "iostream"

WrongAnimal::WrongAnimal() : type("WrongAnimal")
{
	std::cout << "Default constructor for WrongAnimal" << std::endl;
}
WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
	std::cout << "Copy constructor for WrongAnimal" << std::endl;
	*this = copy;
}
WrongAnimal::~WrongAnimal()
{
	std::cout << "Destructor for WrongAnimal" << std::endl;
}
WrongAnimal &WrongAnimal::operator=(const WrongAnimal &value)
{
	if (this == &value)
		return *this;
	this->type = value.type;
	return *this;
}
WrongAnimal::WrongAnimal(const std::string &name) : type(name)
{
	std::cout << "Setting type constructor for WrongAnimal" << std::endl;
}

const std::string &WrongAnimal::getType() const
{
	return type;
}

void WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal sounds like default WrongAnimal" << std::endl;
}