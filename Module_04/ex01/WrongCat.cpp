/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ateak <ateak@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 16:38:15 by ateak             #+#    #+#             */
/*   Updated: 2023/01/18 16:44:05 by ateak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << "Default constructor for WrongCat" << std::endl;
}
WrongCat::WrongCat(const WrongCat &copy)
{
	std::cout << "Copy constructor for WrongCat" << std::endl;
	*this = copy;
}
WrongCat::~WrongCat()
{
	std::cout << "Destructor for WrongCat" << std::endl;
}
WrongCat &WrongCat::operator=(const WrongCat &value)
{
	if (this == &value)
		return *this;
	this->type = value.type;
	return *this;
}

void WrongCat::makeSound() const
{
	std::cout << "wrong meow" << std::endl;
}