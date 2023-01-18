/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ateak <ateak@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 16:03:23 by ateak             #+#    #+#             */
/*   Updated: 2023/01/18 16:11:23 by ateak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat() : Animal("Cat")
{
	std::cout << "Default constructor for Cat" << std::endl;
}
Cat::Cat(const Cat &copy)
{
	std::cout << "Copy constructor for Cat" << std::endl;
	*this = copy;
}
Cat::~Cat()
{
	std::cout << "Destructor for Cat" << std::endl;
}
Cat &Cat::operator=(const Cat &value)
{
	if (this == &value)
		return *this;
	this->type = value.type;
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "meow meow" << std::endl;
}